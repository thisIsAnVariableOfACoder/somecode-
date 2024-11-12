#include <bits/stdc++.h>

using namespace std;

int n, x, pos;
int a[105];

void back() {
	int i, j;
	
	for (i=1; i<=n-x; i++) {
		pos= pos+1;
		a[pos]= i;
		x= x + i;
		if (x==n) {
			for (j=1; j<=pos; j++) {
				cout << a[j] << " ";
			}
			cout << "\n";	
		}
		else
			back();
		pos= pos-1;
		x= x - i;
	}
}

int main() {
	cin >> n;

	x= 0;
	pos= 0;
	back();
}