#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,a,b,i,countt;
	vector<pair<int,int>> ab;
	cin >> n >> m;
	for(i = 1; i <= n; i++) {
		cin >> a >> b;
		
		ab.push_back(make_pair(a,b));
	}
	
	sort(ab.begin(),ab.end());
	countt = 0;
	for(i = 0; i < ab.size(); i++) {
		if (m>=(ab[i].first)) {
			m = m + ab[i].second;
			countt = countt + 1;
		}
	}
	
	cout << countt;
}

