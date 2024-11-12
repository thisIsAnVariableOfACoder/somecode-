#include <bits/stdc++.h>
using namespace std;

long long ans[1005];

int main() {
	int m,n,i,j;
	long long p[1005],l,r,x;
	cin >> m >> n;
	for(i = 1; i <= m; i++) cin >> p[i];
	for(i = 1; i <= n; i++) {
		cin >> l >> r >> x;
		
		for(j = 1; j <= m; j++) {
			if (p[j]>=l && p[j]<=r) {
				if (l%2!=0) {
					if (p[j]%2==0) ans[j] = ans[j] - x; 
					else ans[j] = ans[j] + x;
				}
				else {
					if (p[j]%2==0) ans[j] = ans[j] + x; 
					else ans[j] = ans[j] - x;
				}
			}
		}
	}
	
	for(i = 1; i <= m; i++) cout << ans[i] << endl;
}

