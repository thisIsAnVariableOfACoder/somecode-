#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,t;
ll a[100005],pre[100005];

ll bs3(ll p) {
	ll l,r,mid;
	l = p;
	r = n;
	while(l<=r) {
		mid = (l+r)/2;
		if (pre[mid] - pre[p] <= t)
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

void prefix(ll o) {
	ll i;
	pre[0] = 0;
	for(i = 1; i <= o; i++)
		pre[i] = pre[i-1] + a[i];
}

int main() {
	ll i,pos,ans;
	cin >> n >> t;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	
	prefix(n);
	ans = 0;
	for(i = 1; i <= n; i++) {
		pos = bs3(i);
		if (pre[pos]-pre[i-1]<=t)
			ans = max(ans,pos-i+1);
	}
	
	cout << ans;
}
