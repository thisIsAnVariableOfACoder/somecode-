#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("CAU1_14.INP","r",stdin);
	freopen("CAU1_14.OUT","w",stdout);
}

ll a,b,c,d;

int main() {
	read();
	ll tuSo,mauSo,tmp;
	cin >> a >> b >> c >> d;
	
	tuSo = a*d - b*c;
	mauSo = b*d;
	tmp=tuSo;
	tuSo = tuSo/(__gcd(tuSo,mauSo));
	mauSo = mauSo/(__gcd(tmp,mauSo));
	if ((tuSo>0 && mauSo<0) || (tuSo<0 && mauSo<0)) {
		tuSo = tuSo*(-1);
		mauSo = mauSo*(-1);
	}
	
//	cout << tuSo << " " << mauSo << "\n";
	
	cout << tuSo << " " << mauSo;
}





