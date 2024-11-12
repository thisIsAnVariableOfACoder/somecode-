#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[105],pre[105];
ll t,n,h;

bool checkk(ll q) {
	ll i,ans;
	pre[0] = 0;
	for(i = 1; i < n; i++) {
		if ((a[i]+q-1)>=(a[i+1])) {
			pre[i] = a[i+1]-1;
		}
		else {
			pre[i] = a[i]+q-1;
		}
	}
	pre[n] = a[n]+q-1;
	ans = 0;
	for(i = 1; i <= n; i++) {
		ans = ans + (pre[i]-a[i])+1;
		
		//cout << i << ": " << q << " " << pre[i] << " " << ans << "\n";
	}
	
	return (ans >= h);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = 1e18;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid)==false)
			l = mid + 1;
		else
			r = mid - 1;
		
		//cout << "\n";
	}
	
	return l;
}

int main() {
	cin >> t;
	while(t--) {
		ll i;
		cin >> n >> h;
		for(i = 1; i <= n; i++)
			cin >> a[i];
		
		cout << bs() << "\n";
	}
}
