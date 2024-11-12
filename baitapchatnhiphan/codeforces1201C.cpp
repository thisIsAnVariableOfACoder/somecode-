#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;
ll a[200005];

bool checkk(ll x) {
	ll i,sum;
	sum = 0;
	for(i = (n+1)/2; i <= n; i++) {
		sum = sum + max(ll(0),x-a[i]);
	}
	
	//cout << x << " " << sum << "\n";
	
	return (sum<=k);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = 1e10;
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
	ll i;
	cin >> n >> k;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	
	sort(a+1,a+n+1);
	
	cout << bs();
	//checkk(3);
}
