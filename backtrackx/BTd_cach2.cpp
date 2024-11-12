#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
ll a[105];

void back(ll pos, ll x) {
	ll i, j;
	if (x==n) {
		for (j=1; j<=pos-1; j++) {
			cout << a[j] << " ";
		}
		cout << "\n";
	}
	for (i=1; i<=n-x; i++) {
		if (pos>=3) {
            if ((a[pos-2]>a[pos-1] && i>a[pos-1]) || (a[pos-2]<a[pos-1] && i<a[pos-1]))
                a[pos] = i;
            else
                continue;
        }
		back(pos+1, x+i);
	}
}

int main() {
	ll i,j;
	cin >> n;

	for(i = 1; i <= n; i++) {
		a[1] = i;
		for(j = 1; j <= n; j++) {
			if (i!=j) {
				a[2] = j;
				back(3, i+j);
			}
		}
	}
	cout << n;
}