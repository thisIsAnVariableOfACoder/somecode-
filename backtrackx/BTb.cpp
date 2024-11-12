#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];

void back(int pos, int x) {
	int i;

	if (x==n) {
		for (i=1; i<=pos-1; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (i=a[pos-1] + (a[pos-1]%2==0); i<=n-x; i=i+2) {
        a[pos]= i;
        back(pos+1, x+i);
	}
}

int main() {
	cin >> n;

    a[0]=1;
	back(1, 0);
}