#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("CAU1Q_2223.INP","r",stdin);
	freopen("CAU1Q_2223.OUT","w",stdout);
}

ll n,m,p;

int main() {
	read();
	cin >> n >> m >> p;
	
	cout << m*(ll(((n-p)/m) - (n<p))) + p;
//	cout << ll(-0.2);
}
