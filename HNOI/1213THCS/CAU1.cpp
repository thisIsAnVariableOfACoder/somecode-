#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nguyenpk ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll n;
bool prime[100005];
struct arrForLine2 {
	ll a,b,c;
} line2[100005];

void primeSeive() {
	ll i,j;
	for(i = 2; i <= n; i++) {
		if (prime[i]) {
			for(j = i*i; j <= n; j+=i) {
				prime[j] = false;
			}
		}
	}
}

void line1() {
	ll i;
	bool checkk;
	checkk = true;
	for(i = 2; i <= sqrt(n); i++) {
		if (prime[i] && (n%i==0)) {
			cout << i << "\n";
			
			checkk = false;

			break;
		}
	}
	if (checkk && prime[n]) {
		cout << n << "\n";
	}
}

int main() {
	nguyenpk;

	ll i,j,ans;
	cin >> n;

	memset(prime,true,sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	primeSeive();
	ans = 0;
	for(i = 2; i <= n; i++) {
		for(j = i; j <= n; j++) {
			if (prime[i] && prime[j] && (n-i-j)>=i && (n-i-j)>=j) {
				if (prime[n-i-j]) {
					ans++;

					line2[ans].a = i;
					line2[ans].b = j;
					line2[ans].c = n-i-j;
				}
			}
		}
	}

	line1();
	cout << ans << "\n"; // line 2
	for(i = 1; i <= ans; i++) {
		cout << line2[i].a << " " << line2[i].b << " " << line2[i].c << "\n";
	}
}
