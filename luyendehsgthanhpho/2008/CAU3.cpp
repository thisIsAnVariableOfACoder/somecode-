#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,ans;
	ans = 0;
	while(a!=c || b!=d) {
		if ((a>b && b<d) || (a<b && b>d)) {
			swap(a,b);
			ans++;
		}
		if (a>c) {
			a = a - b;
			ans++;
		}
		else {
			a = a + b;
			ans++;
		}
		// ...
	}
}

