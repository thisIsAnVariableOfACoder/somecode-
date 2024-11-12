#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,d,x,y,tm1;
	cin >> a >> b >> c >> d;
	
	tm1 = a;
	a = a/(__gcd(a,b));
	b = b/(__gcd(tm1,b));
	tm1 = c;
	c = c/(__gcd(c,d));
	d = d/(__gcd(tm1,d));
	a = a*d;
	c = c*b;
	b = b*d;
	x = a - c;
	y = b;
	tm1 = x;
	x = x/(__gcd(x,y));
	y = y/(__gcd(tm1,y));
	if (y<0) {
		x = x*(-1);
		y = y*(-1);
	}
	
	cout << x << " " << y;
}

