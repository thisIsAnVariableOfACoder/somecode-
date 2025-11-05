#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
bool prime[1000005];

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("045DTC.INP","r",stdin);
	freopen("045DTC.OUT","w",stdout);
}

void seive() {
	ll i,j;
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(i=2;(i*i)<=n;i++) {
		if (prime[i]) {
			for(j=i*i;j<=n;j+=i) {
				prime[j]=false;
			}
		}
	}
}

//ll tach2(ll x) {
//	ll ret;
//	ret=0;
//	while(x%2==0) {
//		x/=2;
//		ret += 1;
//	}
//	return ret;
//}

ll tach5(ll x) {
	ll ret;
	ret=0;
	while(x%5==0) {
		x/=5;
		ret+=1;
	}
	return ret;
}

int main() {
	read();
	seive();
	ll i,tong2,tong5;
	cin >> n;
//	tong2=0;
	tong5=0;
	for(i=1;i<=n;i++) {
		if ((i%2==0) || (i%5==0)) {
//			tong2 += tach2(i);
			tong5 += tach5(i);
		}
	}
	
//	cout << min(tong2,tong5);
	cout << tong5; // so mu cua 2 luon lon hon 5 trong 1 giai thua
}
