#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,d;
ll pre[100005];
pair<ll, ll> a[100005];

ll bs1(ll p) {
	ll l,r,mid;
	l = p;
	r = n;
	while(l<=r) {
		mid = (l+r)/2;
		if (a[mid].first - a[p].first < d)
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	ll i,m,s,ans,pos;
	cin >> n >> d;
	for(i = 1; i <= n; i++) {
		cin >> m >> s;
		a[i] = (make_pair(m,s));
	}
	
	ans= 0;
	sort(a+1,a+n+1);
	pre[0]= 0;
	for (i=1; i<=n; i++)
		pre[i]= pre[i-1] + a[i].second;
	for(i = 1; i <= n; i++) {
		pos = bs1(i);
		ans= max(ans, pre[pos]-pre[i-1]);
	}
	
	cout << ans;
}
