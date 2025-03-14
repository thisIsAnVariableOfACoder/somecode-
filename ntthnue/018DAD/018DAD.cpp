#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,a;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(0);
    freopen("018DAD.INP","r",stdin);
    freopen("018DAD.OUT","w",stdout);
}

int main() {
	read();
	ll i,cntd,cnta;
	cin >> n;
	cntd=0;
	cnta=0;
	for(i=1;i<=n;i++) {
		cin >> a;
		
		cntd += (a>0);
		cnta += (a<0);
	}
	
	cout << cnta << " " << cntd << " " << n-cntd-cnta;
}
