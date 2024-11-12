#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	int i,n,f;
	cin >> n;
	
	while(n--) {
		cin >> s;
		
		for(i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		t = s[0];
		for(i = 0; i < s.size()-1; i++) {
			if (s[i]!=s[i+1]) t = t + s[i+1];
		}
		f = t.find("bruhm");
		
		if (f!=string::npos) cout << 1;
		else cout << 0;
		cout << endl;
	}
}

