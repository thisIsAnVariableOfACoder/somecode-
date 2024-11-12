#include <bits/stdc++.h>
using namespace std;
#define arrSiz 200005
typedef long long ll;

ll t,a[5];
string s;

void pre() {
	ll i;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	for(i = 0; i < s.size(); i++) {
		a[1] = a[1] + (s[i]=='1');
		a[2] = a[2] + (s[i]=='2');
		a[3] = a[3] + (s[i]=='3');
	}
}

ll twoPointerSol() {
	ll l,r,tmp1,tmp2,i;
	bool ch1,ch2,ch3;
	ch1 = false;
	ch2 = false;
	ch3 = false;
	for(i = 0; i < s.size(); i++) {
		if (s[i]=='1')
			ch1 = true;
		if (s[i]=='2')
			ch2 = true;
		if (s[i]=='3')
			ch3 = true;
		if (ch1 && ch2 && ch3)
			break;
	}
	if (ch1 && ch2 && ch3) {
		bool checkk = false;
		l = 0;
		r = s.size()-1;
		while(checkk==false) {
			tmp1 = int(s[l])-48;
			tmp2 = int(s[r])-48;
			
			//cout << l << " " << r << " " << a[tmp1] << " " << tmp1 << " " << a[tmp2] << " " << tmp2 << "\n";
			
			if (a[tmp1]==1 && a[tmp2]==1) {
				checkk = true;
			}
			else {
				if (a[tmp1]==1) {
					r=r-1;
					a[tmp2] = a[tmp2] - 1;
				}
				else if (a[tmp2]==1) {
					l = l + 1;
					a[tmp1] = a[tmp1] - 1;
				}
				else {
					if (a[tmp1]>=a[tmp2]) {
						l = l + 1;
						a[tmp1] = a[tmp1] - 1;
					}
					else {
						r = r - 1;
						a[tmp2] = a[tmp2] - 1;
					}
				}
			}
		}
		return (r-l+1);
	}
	else
		return 0;
}

int main() {
	cin >> t;
	while(t--) {
		cin >> s;
		
		pre();
		
		cout << twoPointerSol() << "\n";
		//twoPointerSol();
	}
}
