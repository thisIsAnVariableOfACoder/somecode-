#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,ans;
	double v[1005],d;
	cin >> n >> d;
	for(i = 1; i <= n; i++) cin >> v[i];
	
	ans = 0;
	for(i = 2; i <= n; i++) {
		for(j = 1; j <= i-1; j++) {
			if (((d/(v[i]))+i)<((d/(v[j]))+j)) ans = ans + 1;
		}
	}
	
	cout << ans;
}

