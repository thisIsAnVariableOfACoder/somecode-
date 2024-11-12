#include <bits/stdc++.h>
using namespace std;
#define arrSiz 1000005
typedef long long ll;

ll t,n;
ll a[arrSiz];
ll pre[arrSiz];

void prefix() {
	ll i;
	pre[0]=0;
	for(i=1;i<=n;i++)
		pre[i] = pre[i-1]+a[i];
}
ll sumSub(ll p, ll q) {
	return (pre[q]-pre[p-1]);
}

int main() {
	cin >> t;
	while(t--) {
		ll i,j,cnt;
		cin >> n;
		for(i = 1; i <= n; i++)
			cin >> a[i];
		
		prefix();
		cnt=0;
		for(i = 1; i <= n; i++) {
			for(j=i; j <= n; j++) {
				if ((pre[j]-pre[i-1])==0) {
					cnt++;
				}
			}
		}
		
		cout << cnt << "\n";
	}
}
