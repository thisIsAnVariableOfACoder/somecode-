#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int i,j,countt,diff,diffCHAR;
        bool chk,CHAR;
        string s;
        cin >> s;
		
		chk = true;
		diff = 0;
		CHAR = 1;
		diffCHAR = 0;
        for(i = 65; i <= 90; i++) {
        	countt = 0;
        	CHAR = false;
        	for(j = 0; j <= s.size(); j++) {
        		if (int(s[j])==i) {
        			countt = countt + 1;
        			CHAR = true;
				}
			}
			if (CHAR) diffCHAR = diffCHAR + 1;
			if (countt==1) diff = diff + 1;
			else if ((countt>1 && countt%2!=0) || (diff>=2)) chk = false;
		}
		
		if (chk || diffCHAR==1) cout << "YES";
		else cout << "NO";
		cout << endl;
    }
}
