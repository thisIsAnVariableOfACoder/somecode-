#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,d;
ll a[100005];

ll bs3(ll p) {
	ll l,r,mid;
	l = p+2;
	r = n;
	while(l<=r) {
		mid = (l+r)/2;
		if (a[mid] - a[p] <= d)
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	ll i,ans,pos;
	cin >> n >> d;
	for(i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	ans= 0;
	for(i = 1; i <= n-2; i++) {
		pos = bs3(i);
		ans= ans + (pos-i)*(pos-i-1)/2;
	}
	
	cout << ans;
}
