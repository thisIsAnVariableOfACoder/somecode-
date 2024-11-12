#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool prime(ll b) {
	if (b<=1) return false;
	else if (b==2) return true;
	else {
		ll q;
		for (q = 2; q <= (ll)(sqrt(b)); q++) {
			if (b%q==0) {
				return false;
				break;
			}
		}
	}
	return true;
}

ll sumSquareDigits(ll x) {
	ll i,s;
	string a;
	a = to_string(x);
	s = 0;
	for(i = 0; i < a.size(); i++) s = s + (int(a[i])-48)*(int(a[i])-48);

	return s;
}

int main() {
	ll n,p;
	cin >> n;

	for(p = 1; p <= ll(sqrt(n)); p++) {
		if (prime(sumSquareDigits(n+p))) {
			cout << n+p;

			break;
		}
	}
}
