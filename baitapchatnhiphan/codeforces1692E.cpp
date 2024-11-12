#include <bits/stdc++.h>
using namespace std;
#define siz 200005
typedef long long ll;

ll a[siz],pre[siz],s,n,i;

void prefix(ll n) {
	ll i;
	pre[0] = 0;
	for(i = 1; i <= n; i++)
		pre[i] = pre[i-1]+a[i];
}

ll SUMAB(ll a, ll b) {
	return pre[b]-pre[a];
}

ll bs3() {
	ll l,r,chat;
	l = i;
	r = n;
	while(l<=r) {
		chat=(l+r)/2;
		if (pre[chat]-pre[i-1]<=s)
			l = chat + 1;
		else
			r = chat - 1;
	}
	
	return r;
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll ans,pos;
		cin >> n >> s;
		for(i = 1; i <= n; i++)
			cin >> a[i];
		prefix(n);
		
		ans = -1;
		for(i = 1; i<=n; i++) {
			pos = bs3();
			if (pre[pos]-pre[i-1]==s) 
				ans = max(ans,pos-i+1);
		}
		
		if (ans>0) 
			cout << n-ans;
		else
			cout << -1;
		cout << "\n"; 
	}
}
