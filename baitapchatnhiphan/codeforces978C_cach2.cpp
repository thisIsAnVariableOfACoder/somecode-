#include <bits/stdc++.h>
using namespace std;
#define sizE 200005

long long b[sizE],a[sizE],pre[sizE];

void prefixSUMM(long long x) {
	long long i;
	pre[0] = 0;
	pre[1] = a[1];
	for(i = 2; i <= x; i++) {
		pre[i] = pre[i-1] + a[i];
	}
}

long long binSE(long long s, long long o, long long p) { // cach 2
	long long l,r,chat;
	l = p;
	r = o;
	while(l<=r) {
		chat=(l+r)/2;
		if (b[chat] <= s) 
			l = chat + 1;
		else 
			r = chat - 1;
	}
	
	return r;
}

int main() {
	long long n,m,i,j,pos,x;
	cin >> n >> m;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	for(i = 1; i <= m; i++)
		cin >> b[i];
	
	prefixSUMM(n);
	pos = 0;
	x = 1;
	for(i = 1; i <= n; i++) {
		pos = binSE(pre[i],m,x);
		for(j = x; j <= pos; j++) 
			cout << i << " " << b[j]-pre[i-1] << "\n";
		
		x = pos + 1;
	}
}

