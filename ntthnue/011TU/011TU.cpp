#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("011TU.INP","r",stdin);
	freopen("011TU.OUT","w",stdout);
}

ll n;

int main() {
	read();
	ll i,sum;
	cin >> n;
	
	sum=0;
	for(i=1;i*i<=n;i++) {
		if (n%i==0) {
			sum += i;
			if (i*i<n) {
				sum += n/i;
			}
		}
	}
	
	cout << sum;
}
