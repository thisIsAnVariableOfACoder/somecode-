#include <bits/stdc++.h>
using namespace std;

long long n,x,t;
long long a[200005];

bool checkk(long long k) {
	long long i, temp;
	temp= 0;
	for (i=1; i<=n; i++) {
		temp = temp + (k-a[i])*(a[i]<k);
	}
	return (temp <= x);
}

long long bs() {
	long long l, r, mid;
	l= 1;
	r= 1e10;
	while (l <= r) {
		mid= (l+r)/2;
		if (checkk(mid))
			l= mid+1;
		else
			r= mid-1;
	}
	return r;
}

int main() {
	cin >> t;
	while(t--) {
		long long i;
		cin >> n >> x;
		for(i = 1; i <= n; i++)
			cin >> a[i];
		
		cout << bs() << "\n";
	}
}
