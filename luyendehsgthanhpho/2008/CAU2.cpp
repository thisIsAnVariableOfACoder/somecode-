#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,minn;
	cin >> n;
	int a[n+5],b[n+5];
	for(i = 1; i <= n; i++) cin >> a[i];
	
	b[1] = a[1];
	for(i = 2; i <= n; i++) b[i] = max(b[i-1],a[i]);
	minn = INT_MAX;
	for(i = 1; i < n; i++) {
		for(j = i + 1; j <= n; j++) {
			minn = min(minn,abs(a[i]+a[j]));
		}
	}
	
	for(i = 1; i <= n; i++) cout << b[i] << " ";
	cout << endl;
	cout << minn;
}

