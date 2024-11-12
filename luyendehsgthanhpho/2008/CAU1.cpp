#include <bits/stdc++.h>
using namespace std;

int sumdigitindec(int x) {
	int sum;
	sum = 0;
	while(x>0) {
		sum = sum + x%10;
		x = x / 10;
	}
	
	return sum;
}

int main() {
	int n,y,s;
	cin >> n;
	
	s = sumdigitindec(n);
	y = s + 1;
	while(sumdigitindec(y)!=s) {
		y++;
	}
	
	cout << s << " " << y;
}

