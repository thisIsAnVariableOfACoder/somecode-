#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long Solve(long long x, long long y) {
	long long delta,y1,y2,x1,x2;
	delta = x*x-4*y;
	
	if (delta==0) return x/2;
	else if (delta>0) {
		y1 = (x+sqrt(delta))/2;
		y2 = (x-sqrt(delta))/2;
		x1 = x - y1;
		x2 = x - y2;
		if (x1*y1==y) return x1;
		return x2;
	}
	return -1;
}

int main() {
	faster;
	long long A,B;
	cin >> A >> B;
	
	cout << ((((B-(B%2==0))-(A+(A%2==0)))/2)+1)*((B-(B%2==0))+(A+(A%2==0)))/2 << endl;
	cout << A/(__gcd(A,B)) << " " << B/(__gcd(A,B)) << endl;
	cout << Solve(A,B) << " " << A - Solve(A,B);
}

