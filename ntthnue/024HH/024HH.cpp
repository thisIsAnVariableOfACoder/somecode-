#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("024HH.INP", "r", stdin);
    freopen("024HH.OUT", "w", stdout);
}

ll calc(ll x) {
	ll sum,i;
	sum=1;
	for(i=2;(i*i)<=x;i++) {
		if (x%i==0) {
			sum += i;
			if ((i*i)<x) {
				sum += x/i;
			}
		}
	}
	return sum;
}

int main() {
	read();
	ll i,ans;
	cin >> n;
	
	ans=0;
	for(i=2;i<=n;i++) {
		ans += (calc(i)==i);
//		if (calc(i)==i) cout << i << "\n";
	}
	
	cout << ans;
}
