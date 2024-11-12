#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2,subs1,subs2,dong4;
	int s1s,s2s;
	cin >> s1 >> s2;
	
	s1s = s1.size();
	s2s = s2.size();
	
	cout << s1s + s2s << endl;
	cout << abs(s1s - s2s) << endl;
	
	reverse(s2.begin(),s2.end());
	dong4= "";
	dong4 = dong4 + char(s1[0]) + char(s2[s2s-1]) + char(s2[0]) + char(s1[s1s-1]);
	
	cout << s1 + s2 << endl;
	cout << dong4 << endl;
	
	reverse(s2.begin(),s2.end());
	subs1 = s1.substr(0,(s1s/2));
	subs2 = s2.substr(s2s/2,s2s);
	
	cout << subs1 + subs2;
	
	subs1 = s1.substr(s1s/2,s1s);
	subs2 = s2.substr(0,s2s/2);
	reverse(subs1.begin(),subs1.end());
	reverse(subs2.begin(),subs2.end());
	
	cout << subs2+subs1;
}

