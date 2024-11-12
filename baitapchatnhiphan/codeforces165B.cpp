#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,kNew;

bool checkk(ll a) {
	ll sum;
	kNew = 1;
	sum = 0;
	while(kNew<=a) {
		sum = sum + a/kNew;
		kNew=kNew*k;
	}
	
	return (sum>=n);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = n;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid)==false)
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return l;
}

int main() {
	cin >> n >> k;
	
	cout << bs();
}
