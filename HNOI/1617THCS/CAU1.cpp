#include <bits/stdc++.h>
using namespace std;

int soUoc(int x) {
	int q;
	set<int> uoc;
	for(q = 1; q <= int(sqrt(x))+1; q++) {
		if (x%q==0) {
			uoc.insert(q);
			uoc.insert(x/q);
		}
	}
	
	return uoc.size();
}

int demSo(int a, int b) {
	int i,ans;
	ans = 0;
	for(i = 1; i <= a; i++) {
		if (soUoc(i)==b) ans = ans + 1;
	}
	
	return ans;
}

int main() {
	int k,n;
	cin >> n >> k;
	
	cout << demSo(n,k);
}

