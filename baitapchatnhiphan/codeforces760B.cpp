#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,k;

long long csc(long long x, long long y) {
	return (x + y)*(y - x + 1)/2;
}
bool checkk(ll x) {
	ll left, right, start, stop, sum;
	sum = 0;
	// left
	left = k + 1 - x;
	right = k + x - 1;
	
	// cout << left << " " << right << " ";
	if (left < 1) {
		start= x - k + 1;
		// cout << start << " ";
		sum= sum + csc(start, x);
	}
	else {
		sum= sum + (left - 1) + csc(1, x);
	}
	
	if (right > n) {
		stop= x - (n - k);
		// cout << stop << " ";
		sum= sum + csc(stop, x);
	}
	else {
		sum= sum + (n - right) + csc(1, x);
	}
	sum= sum - x;
	// cout << sum << " ";
	
	return (sum<=m);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = 1e9;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid))
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	cin >> n >> m >> k;
	
	// checkk(2);
	cout << bs();
}
