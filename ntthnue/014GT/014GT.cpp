#include <bits/stdc++.h>
using namespace std;

#define fas ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

void read() {
	freopen("014GT.INP","r",stdin);
	freopen("014GT.OUT","w",stdout);
}

ll ans=1;
ll n;

ll gt(ll x) {
	if (x<=1)
		return 1;
	ans*=x;
	return gt(x-1);
}

int main() {
	fas;
	read();
	
	cin >> n;
	
	gt(n);
	
	cout << ans;
}

