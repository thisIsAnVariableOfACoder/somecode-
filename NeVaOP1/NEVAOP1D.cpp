#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,k;
	cin >> n >> k;
	
	cout << (n+1)/k << " " << n-((n+1)/k)*k;
}

