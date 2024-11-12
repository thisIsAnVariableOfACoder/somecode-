#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n;
ll w[200005];

int main() {
	ll i,j,sum1,sum2,ans;
	cin >> t;
	while(t--) {
		cin >> n;	
		for(i = 1; i <= n; i++) 
			cin >> w[i];
		
		i=1;
		j=n;
		sum1 = w[1];
		sum2 = w[n];
		ans = 0;
		while(i<j) {
			if (sum1==sum2) {
				ans = max(ans,i+(n-j+1));
			}
			if (sum1<sum2) {
				i++;
				sum1 = sum1 + w[i];
			}
			else {
				j--;
				sum2 = sum2 + w[j];
			}
		}
		
		cout << ans << "\n";
	}
}
