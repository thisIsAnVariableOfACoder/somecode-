#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("034XC.INP","r",stdin);
	freopen("034XC.OUT","w",stdout);
}

string s1,s2;

int main() {
	read();
	ll i,fin;
	bool checkk;
	cin >> s1 >> s2;
	
	checkk=true;
	fin=0;
	i=0;
	while(checkk && i<(s2.size())) {
		fin = s1.find(s2[i],fin);
		
//		cout << s2[i] << " " << fin << "\n";
		
		if (fin==string::npos) {
			checkk=false;
		}
		else i++;
	}
	
	cout << checkk;
}






