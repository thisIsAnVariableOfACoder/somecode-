#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a[25],maxx,s,t,i,j;
	cin >> n;
	maxx = INT_MIN;
	for(i = 1; i <= n; i++) {
		cin >> a[i];
		
		maxx = max(maxx,a[i]);
		t = t + a[i];
		
		cout << maxx << " ";
	}
	cout << endl;
	
	s = INT_MAX;
	for(i = 1; i < n; i++) {
		for(j = i + 1; j <= n; j++) {
			s = min(s,abs(a[i]+a[j]));
		}
	}
	
	cout << s << endl << t;
}

