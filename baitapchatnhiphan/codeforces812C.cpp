#include <bits/stdc++.h>
using namespace std;
#define arrSiz 100005
#define fi first
#define se second

typedef long long ll;

ll n,s;
ll a[arrSiz];
ll pre[arrSiz];

ll checkk(ll q) {
	ll i,sum;
	for(i = 1; i <= n; i++) {
		pre[i] = a[i] + i*q;
	}
	sort(pre+1,pre+n+1);
	sum = 0;
	for(i = 1; i <= q; i++) {
		sum = sum + pre[i];
	}
	
	return sum;
}

ll bs() {
	ll l,r,mid;
	l=1;
	r=n;
	while(l<=r) {
		mid=(l+r)/2;
		if (checkk(mid)<=s) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
		
	return r;
}

int main() {
	ll i,b;
	cin >> n >> s;
	for(i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	b = bs();
	
	cout << b << " " << checkk(b);
}
