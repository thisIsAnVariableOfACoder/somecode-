#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("CAU1Q2_2223.INP","r",stdin);
	freopen("CAU1Q2_2223.OUT","w",stdout);
}

bool Uoc(ll x) {
	ll cnt,i;
	cnt=0;
	for(i=2;(i*i)<=x;i++) {
		if (x%i==0) {
			cnt += 1;
			cnt += ((i*i)<x);	
		}
		if (cnt>=2) {
			return false;
		}
	}
	if (x>=1)
		return true;
	return false;
}

int main() {
	read();
	cin >> n;
	
	n+=1;
	while(n--) {
		if (Uoc(n)) {
			cout << n;
			
			break;
		}
	}
}
