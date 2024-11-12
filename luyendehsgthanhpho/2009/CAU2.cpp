#include <bits/stdc++.h>
using namespace std;

int main() {
	int i;
	long long a[20],maxx,ans;
	maxx = LONG_MIN;
	for(i = 1; i <= 12; i++) {
		cin >> a[i];
		
		maxx = max(maxx,a[i]);
	}
	
	ans = 0;
	for(i = 1; i <= 12; i++) {
		if (a[i]>0) {
			if (a[i]<30) ans = ans + (a[i])*3000;
			else ans = ans + 30*3000;
			a[i] = a[i] - 30;
			if (a[i]>0) {
				if (a[i]<=31) ans = ans + (a[i])*2500;
				else ans = ans + 31*2500;
				a[i] = a[i] - 31;
				if (a[i]>0) {
					if (a[i]<=31) ans = ans + (a[i])*1800;
					else ans = ans + 31*1800;
					a[i] = a[i] - 31;
					if (a[i]>0) ans = ans + (a[i])*1000;
				}	
			}
		}
		cout << ans << endl;
		ans=0;
	}
	
	for(i = 1; i <= 12; i++) {
		if (maxx==(a[i])) cout << i << " ";
	}
	cout << endl;
}

