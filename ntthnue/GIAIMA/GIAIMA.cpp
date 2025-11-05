#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[10000005];
string n;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("GIAIMA.INP","r",stdin);
	freopen("GIAIMA.OUT","w",stdout);
}

int main() {
	read();
	ll i,sum;
	cin >> n;
	
	sum=0;
	for(i=0;i<n.size();i++) {
		a[i+1]=ll(n[i]-'0');
		sum += a[i+1];
	}
	sort(a+1,a+n.size()+1,greater<ll>());
	if (a[n.size()]==ll(0) && sum%3==0) {
		for(i=1;i<=n.size();i++) {
			cout << a[i];
		}
	}
	else {
		cout << -1;
	}
}
