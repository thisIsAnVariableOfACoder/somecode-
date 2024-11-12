#include <bits/stdc++.h>
using namespace std;

#define NGUYENgreen ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

typedef long long ll;

bool isSquare(ll x) {
	double a;
	a = x;
	return (ll)(sqrt(a))==(double)(sqrt(a));
}

int main() {
	NGUYENgreen;
	ll q,i,j,l,r,countt;
	cin >> q;
	for(i = 1; i <= q; i++) {
		cin >> l >> r;
		
		countt = 0;
		for(j = (ll)(sqrt(sqrt(l))); j <= (ll)(sqrt(sqrt(r))); j++)
			if (isSquare(j*j) && (j*j*j*j)<=r && (j*j*j*j)>=l) countt = countt + 1;
		
		cout << countt << endl;
	}
}

