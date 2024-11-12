#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,c;
ll s[200005];

ll checkk(ll w) {
	ll i,sum;
	sum = 0;
	for(i = 1; i <= n; i++) {
		sum = sum + (s[i]+2*w)*(s[i]+2*w);
		if (sum > c)
			return 1;
	}
	
	return (sum > c);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = (ll) sqrt(c);
	while(l<=r) {
		mid = (l+r)/2;
		if(checkk(mid))
			r = mid - 1;
		else
			l = mid + 1;
	}
	
	return r;
}

int main() {
	cin >> t;
	while(t--) {
		ll i;
		cin >> n >> c;
		for(i = 1; i <= n; i++)
			cin >> s[i];
		
		cout << bs() << "\n";
		//cout << checkk(1) << "\n";
	}
}
