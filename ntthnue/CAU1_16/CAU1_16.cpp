#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("CAU1_16.INP","r",stdin);
	freopen("CAU1_16.OUT","w",stdout);
}

ll a,b,c;

int main() {
	read();
	ll i,ans;
	cin >> a >> b >> c;
	
	ans=1;
	for(i=a;i<=b;i++) {
		ans = (ans%c * (i%c))%c;
	}
	
	cout << ans;
}





