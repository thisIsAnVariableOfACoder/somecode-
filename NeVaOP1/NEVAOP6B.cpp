#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,d,e,f,g,h,i;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
	
	cout << ((3*a)>=(b+d+e)) + ((5*b)>=(a+d+e+f+c)) + ((3*c)>=(b+e+f)) + ((5*d)>=(a+b+e+h+g)) + ((8*e)>=(a+b+c+d+f+g+h+i)) + ((5*f)>=(c+b+e+h+i)) + ((3*g)>=(d+e+h)) + ((5*h)>=(g+d+e+f+i)) + ((3*i)>=(h+e+f));
}

