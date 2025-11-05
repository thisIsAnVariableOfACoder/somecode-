#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("CAU1_18.INP","r",stdin);
	freopen("CAU1_18.OUT","w",stdout);
}

ll n;
const ll maxprim=1000;
bool prime[1005];

void seive() {
	ll i,j;
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(i=2;i*i <= maxprim; i++) {
		if (prime[i]) {
			for(j=i*i;j<=maxprim;j+=i) {
				prime[j]=false;
			}
		}
	}
}

bool checkk(ll x) {
	string tmp;
	ll i,sum;
	tmp=to_string(x);
	sum=0;
	for(i=0;i<tmp.size();i++) {
		sum += ll(tmp[i]-'0')*ll(tmp[i]-'0');
	}
	
//	cout << sum << "\n";
	
	return prime[sum];
}

int main() {
	read();
	ll ans;
	cin >> n;
	
	seive();
	ans=n+1;
	while(!checkk(ans)) {
		ans++;
	}
	
	cout << ans;
}





