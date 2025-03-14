#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("032DX2.INP","r",stdin);
	freopen("032DX2.OUT","w",stdout);
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
	ll i,j,ans;
	cin >> s;
	
	ans=-1;
	for(i=0;i<(s.size());i++) {
		for(j=1;j<(s.size()-i+1);j++) {
			if (dx(s.substr(i,j))) { // subtr(start,length)
				ans=max(ans,j);
			}
//			cout << s.substr(i,j) << "\n";
		}
	}
	
	cout << ans;
	
//	cout << "\n" << s.substr(4,9);
//	cout << "\n" << dx("eeggee");
}