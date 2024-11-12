// nguyenpk's code

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	freopen("015TD.INP","r",stdin);
	freopen("015TD.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

ll a;

int main() {
	fastIO();
	read();
	
	double sum,div;
	sum = 0;
	div = 0;
	while(cin >> a) {
		sum += a;
		div++;
	}
	
	cout << (ll)sum << " ";
	cout << fixed << setprecision(3) << sum/div;
}

