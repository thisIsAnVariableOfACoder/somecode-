#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d,s,ans;
	char c;
	cin >> n >> d;
	ans=0;
	while(n--) {
		cin >> c >> s;
		
		ans = ans + d*s;
	}
	
	cout << ans;
}

