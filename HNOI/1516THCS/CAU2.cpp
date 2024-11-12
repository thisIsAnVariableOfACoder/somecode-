#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,tmp,a[30005];
	cin >> n >> tmp;
	a[1] = tmp;
	for(i = 2; i <= n; i++) {
		cin >> tmp;
		
		a[i] = max(a[i-1],tmp);
	}
	
	for(i = 1; i <= n; i++) cout << a[i] << " ";
}

