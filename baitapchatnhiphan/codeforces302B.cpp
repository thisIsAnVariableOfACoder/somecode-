#include <bits/stdc++.h>
using namespace std;
#define arrSiz 100005
typedef long long ll;

ll c[arrSiz],t[arrSiz],prefix[arrSiz];

void pref(ll a) {
	ll i;
	prefix[0] = 0;
	for(i = 1; i <= a; i++) {
		prefix[i] = prefix[i-1]+((c[i])*(t[i]));
	}
}

ll binSE(ll n, ll x) {
	if (x<=1) return x;
	else {
		ll l,r,chat;
		l = 1;
		r = n;
		while(l<=r) {
			chat = (l+r)/2;
			if (x>prefix[chat]) 
				l = chat + 1;
			else 
				r = chat - 1;
		}
		
		return l;
	}
}

int main() {
	ll n,m,i,v;
	cin >> n >> m;
	for(i = 1; i <= n; i++)
		cin >> c[i] >> t[i];
	pref(n);
	for(i = 1; i <= m; i++) {
		cin >> v;
		
		cout << binSE(n,v) << endl;
	}
}

