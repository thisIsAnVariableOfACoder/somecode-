#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,c,d;
ll a[200005];

bool checkk(ll q) {
	ll sum,i;
	sum = 0;
	for(i = 1; i <= d; i++) {
		if ((i+q-1)%q+1<=n)
			sum = sum + a[(i+q-1)%q+1];
			
		// cout << i%q << " " << sum << "\n";
		if (sum>=c)
			return 1;
	}
	
	// cout << sum << "\n";
	
	return (sum>=c);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = d;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid))
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	cin >> t;
	while(t--) {
		ll i,k;
		cin >> n >> c >> d;
		for(i = 1; i <= n; i++)
			cin >> a[i];
			
		sort(a+1,a+n+1,greater<ll>());
		k = bs();
		
		if (k==0)
			cout << "Impossible";
		else if (k==d)
			cout << "Infinity";
		else
			cout << k - 1;
		cout << "\n";
		
		// checkk(13);
	}
}
