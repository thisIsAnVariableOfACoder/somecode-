#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll p,q;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("001SCH.INP","r",stdin);
	freopen("001SCH.OUT","w",stdout);
}

int main() {
	read();
	
	cin >> p >> q;
	
	cout << p*q;
}
