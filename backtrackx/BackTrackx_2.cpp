#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];

void back(int pos, int x) {
	int i, j;

	for (i=1; i<=n-x; i++) {
		a[pos]= i;
		if (x+i==n) {
			for (j=1; j<=pos; j++) {
				cout << a[j] << " ";
			}
			cout << "\n";	
		}
		else
			back(pos+1, x+i);
	}
}

int main() {
	cin >> n;

	back(1, 0);
}