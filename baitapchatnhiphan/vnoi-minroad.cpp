#include <bits/stdc++.h>
using namespace std;
#define f first 
#define s second
typedef long long ll;

ll a,b,n;
pair<ll,ll> dem[300005];
pair<ll,ll> dk[300005];

ll bs2(ll m) {
	ll l,r,mid;
	l = m;
	r = n;
	while(l<=r) {
		mid = (l+r)/2;
		if ((((dem[mid].f)-(dem[l-1].f))<a) || ((dem[mid].s)-(dem[l-1].s))<b)
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	ll i,d,k,ans,pos;
	cin >> n >> a >> b;
	dem[0] = make_pair(0,0);
	for(i = 1; i <= n; i++) {
		cin >> d >> k;
		
		dk[i] = make_pair(d,k);
	}
	
	sort(dk+1,dk+n+1);
	for(i = 1; i <= n; i++) {
		dem[i].f = (dem[i-1].f) + (dk[i].s==1);
		dem[i].s = (dem[i-1].s) + (dk[i].s==2);
	}
	ans = INT_MAX;
	for(i = 1; i < n; i++) {
		pos = bs2(i);
		if ((((dem[pos].f)-(dem[i-1].f))>=a) && ((dem[pos].s)-(dem[i-1].s)>=b))
			ans = min(ans,(dk[pos].f)-(dk[i].f));
	}
	
	if (ans==INT_MAX) 
		cout << -1;
	else 
		cout << ans;
}
