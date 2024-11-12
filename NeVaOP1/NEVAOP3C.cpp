#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	
	cout << ((a%2)+(b%2)+(c%2)+(d%2)+(e%2))*((a%2==0)+(b%2==0)+(c%2==0)+(d%2==0)+(e%2==0));
}

