#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("036ZZ.INP","r",stdin);
	freopen("036ZZ.OUT","w",stdout);
}

ll m,n;
ll a[10000005];
ll arr[10005][10005];

int main() {
	read();
	ll i,j,k,idx;
	cin >> m >> n;
	for(i=1;i<=(m*n);i++) {
		cin >> a[i];
	}

	sort(a+1,a+(m*n)+1);
	idx=1;
	for(i=1;i<=n;i++) {
		j=1;
		k=i;
		while(j<=m && k>=1) {
			arr[j][k]=a[idx];
			idx++;
			++j;
			--k;
		}
	}
	for(i=2;i<=m;i++) {
		j=i;
		k=n;
		while(j<=m && k>=1) {
			arr[j][k]=a[idx];
			idx++;
			++j;
			--k;
		}
	}
	
	for(i=1;i<=m;i++) {
		for(j=1;j<=n;j++) {
			cout << arr[i][j];
			if (j<n) cout << " ";
		}
		if (i<m) cout << "\n";
	}
}







