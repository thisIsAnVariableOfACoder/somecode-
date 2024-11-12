#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,k,x,sum,pos;

ll checkk(ll q) {
	ll kq;
	if (q<=((k+1)/2)) 
		kq = (q*(q+1))/2;
	else 
		kq = sum - ((k-q)*(k-q+1))/2;
	return (kq>=x);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = k;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid)==false)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return l;
}

int main() {
	cin >> t;
	while(t--) {
		cin >> k >> x;
		
		k = k*2 - 1;
		sum = ((k/2+(k%2))*(k/2+(k%2)+1))/2 + ((k/2)*(k/2+1))/2;
		pos = bs();
		
		if (pos>k) 
			cout << k;
		else 
			cout << pos;
		cout << "\n";
	}
}
