#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	
	cout << (a==b)+(a==c)+(a==d)+(b==c)+(b==d)+(c==d);
}

