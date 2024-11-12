#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,maxx;
ll a[100005];
ll b[100005];

bool checkk(ll x) {
	ll i,sum;
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum = sum + ((a[i]*x)-b[i])*(b[i]<=(a[i]*x));
		
		if (sum>k) {
			return false;
		}
	}
	
	return (sum<=k);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = maxx;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid))
			l = mid + 1;
		else
			r = mid -1;
	}
	return r;
}

int main() {
	ll i;
	cin >> n >> k;
	for (i=1; i <= n; i++)
		cin >> a[i];
	for (i=1; i <= n; i++)
		cin >> b[i];
	
	maxx = LONG_MAX;
	for(i = 1; i <= n; i++) {
		maxx = min(maxx,(b[i]+k)/(a[i]));
	}
	
	cout << bs();
}
