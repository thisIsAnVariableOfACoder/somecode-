#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,b;
ll a[200005];

ll bs3(ll q) {
	ll l,r,mid;
	l=1;
	r=n;
	while(l<=r) {
		mid=(l+r)/2;
		if (a[mid]<=q) 
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	ll i;
	cin >> n >> m;
	
	for(i = 1; i <= n; i++)
		cin >> a[i];
	sort(a+1,a+n+1);
	for(i = 1; i <= m; i++) {
		cin >> b;
		
		cout << bs3(b) << " ";
	}
}
