#include <bits/stdc++.h>
using namespace std;

#define nhanh ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
	nhanh;
	int n,i,in;
	long long t;
	vector<long long> a;
	string abc;
	cin >> n >> abc;
	for(i = 0; i < n; i++) {
		cin >> in;
		
		a.push_back(in);
	}
	
	t = 0;
	i = 0;
	while(i<abc.size()) {
		if (abc[i]==abc[i+1]) {
			if (a[i]<a[i+1]) {
				t = t + a[i];
				abc.erase(abc.begin()+i);
				a.erase(a.begin()+i);
			}
			else {
				t = t + a[i+1];
				abc.erase(abc.begin()+i+1);
				a.erase(a.begin()+i+1);
			}
		}
		else i++;
	}
	
	cout << t;
}

