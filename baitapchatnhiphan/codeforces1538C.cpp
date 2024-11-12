#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[200005];
ll t,n,l,r;

ll bs3(ll beg, ll x) {
	ll l0,r0,mid;
	l0 = beg;
	r0 = n;
	while(l0<=r0) {
		mid = (l0+r0)/2;
		if (a[mid]<=x) 
			l0 = mid + 1;
		else
			r0 = mid - 1;
	}
	
	return r0;
}

ll count_pairs() {
	ll i,leftt, rightt,countt;
    countt = 0;

    for (i = 1; i < n; i++) {

        // Binary search de tim gia tri a[j] thoa man a[j] + a[i] <= r
        rightt  = bs3(i+1, r - a[i]);

        // Binary search de tim gia tri a[j] thoa man a[j] + a[j] < l
        leftt  = bs3(i+1, l - 1 - a[i]);
		
		// so luong phan tu thoa man a[j] + a[i] <= r tru di so luong pt thoa man a[j] + a[j] < l = so luong phan tu thoa man l <= a[i] + a[j] <= r
        countt = countt + (rightt - leftt);
    }

    return countt;
}

int main() {
    cin >> t;

    while (t--) {
        ll i;
        cin >> n >> l >> r;

        for (i = 1; i <= n; i++) {
            cin >> a[i];
        }
		
        sort(a+1,a+n+1);
        
        cout << count_pairs() << "\n";
    }
}
