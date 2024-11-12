#include <bits/stdc++.h>

using namespace std;

long long n, k, q;
long long sub[200005], f[200005];

void init() {
	cin >> n >> k >> q;
}

void proc() {
	long long i, l, r, c; 

	for (i=0; i<=200001; i++)
		sub[i]= 0;
	for (i=1; i<=n; i++) {
		cin >> l >> r >> c;
		sub[l]= sub[l] + c;
		sub[r+1] = sub[r+1] - c;
	}

	for (i=1; i<=200001; i++)
		f[i]= f[i-1] + sub[i];
	for (i=1; i<=200001; i++)
		f[i]= (f[i] >= k) + f[i-1];
	
	for (i=1; i<=q; i++) {
		cin >> l >> r;
		cout << f[r] - f[l-1] << "\n";
	}
}

int main() {
    init();

    proc();
}