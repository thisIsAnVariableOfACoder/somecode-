#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("031DX1.INP","r",stdin);
	freopen("031DX1.OUT","w",stdout);
}

string s;

bool dx(string a) {
	ll i;
	for(i=0;i<(a.size());i++) {
		if (a[i]!=a[(a.size()-1)-i]) {
			return false;
		}
	}
	return true;
}

int main() {
	read();
	ll i,ans;
	cin >> s;
	
	for(i=0;i<(s.size());i++) {
		if (s[i]==s[(s.size())-1]) {
			if (dx(s.substr(i,s.size()))) {
				ans = i;
				break;
			}
		}
	}
	
	cout << ans;
}





