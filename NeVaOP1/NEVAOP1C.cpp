#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b;
	cin >> a >> b;
	
	cout << fixed << setprecision(4) << a+b+sqrt(a*a+b*b) << endl;
	cout << fixed << setprecision(4) << (a*b)/2;
}

