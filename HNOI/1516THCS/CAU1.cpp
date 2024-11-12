#include <bits/stdc++.h>
using namespace std;

int main() {
	long long c,ans,a,b,i;
	cin >> a >> b >> c;
	
	if (a<=c && c<=b) cout << 0;
	else {
		ans = 1;
		for(i = a; i <= b; i++) {
			ans = (ans*(i%c))%c;
		}
		
		cout << ans%c;
	}
}

