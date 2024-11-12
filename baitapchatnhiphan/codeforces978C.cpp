#include <bits/stdc++.h>
using namespace std;
#define sizE 200005

long long a[sizE],pre[sizE];

void prefixSUMM(long long x) {
	long long i;
	pre[0] = 0;
	pre[1] = a[1];
	for(i = 2; i <= x; i++) {
		pre[i] = pre[i-1] + a[i];
	}
}

long long binSE(long long s, long long o) { // cach 1: max <
	long long l,r,chat;
	l = 1;
	r = o;
	while(l<=r) {
		chat = (l+r)/2;
		if (pre[chat] < s) 
			l = chat + 1;
		else 
			r = chat - 1;
	}
	
	return l;
}

int main() {
	long long n,m,i,pos;
	long long b;
	cin >> n >> m;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	prefixSUMM(n);
	for(i = 1; i <= m; i++) { // cach 1
		cin >> b;
		
		pos = binSE(b,n);
		cout << pos << " " << b-pre[pos-1] << endl;
	}
}

