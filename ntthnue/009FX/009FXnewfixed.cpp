#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
double x;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("009FX.INP","r",stdin);
	freopen("009FX.OUT","w",stdout);
}

int main() {
	read();
	
	ll i;
	double ans,xTemp;
	cin >> n >> x;
	
	ans = 1;
	xTemp=x;
	for(i=1;i<=n;i++) {
		ans += i/xTemp;
		xTemp*=x;
	}
	
	cout << fixed << setprecision(8) << ans;
}
