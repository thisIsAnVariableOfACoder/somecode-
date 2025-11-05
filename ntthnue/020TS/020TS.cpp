#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[1005];
multiset<ll> mul;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(0);
    freopen("020TS.INP","r",stdin);
    freopen("020TS.OUT","w",stdout);
}

int main() {
	read();
	ll i;
	cin >> n;
	for(i=1;i<=n;i++) {
		cin >> a[i];
		
		mul.insert(a[i]);
	}
	
	a[0]=-999999;
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++) {
		if (a[i]!=a[i-1]) {
			
			cout << a[i] << " " << mul.count(a[i]) << "\n";
			 
		}
	}
}
