#include <bits/stdc++.h>
using namespace std;

long long n;
double x[60005];
double v[60005];

bool checkk(double t) {
	double a1,a2;
	long long i;
	a1 = -1e9 - 5;
	a2 = 1e9 + 5;
	for (i = 1; i <= n; i++) {
		a1 = max(a1,x[i]-t*(v[i]));
		a2 = min(a2,x[i]+t*(v[i]));
	}
	
	return (a1<=a2);
}

double bs() {
	double l,r,mid;
	long long i;
	l = 0;
	r = 1e9 + 5;
	mid = (l+r)/2;
	i = 1;
	while(i<=10000) {
		mid = (l+r)/2;
		if (checkk(mid)==false)
			l = mid;
		else
			r = mid;
		i++;
	}
	
	return r;
}

int main() {
	long long i;
	cin >> n;
	for(i=1;i<=n;i++)
		cin >> x[i];
	for(i=1;i<=n;i++)
		cin >> v[i];
	
	cout << fixed << setprecision(12) << bs();
}
