#include <bits/stdc++.h>
using namespace std;

bool snt(int x) {
	if (x<=1) return false;
	else if (x==2) return true;
	else {
		int w;
		for(w = 2; w <= int(sqrt(x)); w++) {
			if (x%w==0) {
				return false;
				break;
			}
		}
	}
	return true;
}

int bcnn(int x, int y, int z) {
	int maxx;
	maxx = max(x,y);
	maxx = max(maxx,z);
	
	while((maxx%x!=0) || (maxx%y!=0) || (maxx%z!=0)) {
		maxx++;
	}
	
	return maxx;
}

int main() {
	int i,countt,a,b,n,maxx3;
	double p,q,divi;
	string f;
	cin >> a >> b >> n;
	
	countt = 0;
	for(i = a; i <= b; i++) {
		if (snt(i)) countt++;
	}
	maxx3 = max(a,b);
	maxx3 = max(maxx3,n);
	p = a;
	q = b;
	divi = (p/q)-floor(p/q);
	while(divi!=((long long)(divi))) { divi = divi*10; }
	f = to_string((long long)(divi));
	
	cout << __gcd(a,b) << endl;
	cout << countt << endl;
	cout << bcnn(p,q,n) << endl;
	cout << f[n-1];
}

