#include <bits/stdc++.h>
using namespace std;

int main() {
	long long m,n,x,y;
	cin >> m >> n >> x >> y;
	
	cout << min(min(x,y),min(m-x+1,n-y+1));
}

