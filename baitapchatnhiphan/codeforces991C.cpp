#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

bool checkk(ll q) {
	ll vasy,tmp;
	tmp=n;
	vasy=0;
	while(tmp>0) {
		//cout << vasy << " " << tmp << " " << tmp/10 << " " << q << "\n";
		
		vasy = vasy + min(tmp,q);
		tmp = tmp - min(tmp,q);
		tmp = tmp - tmp/10;
	}
	//cout << vasy << " " << tmp << " " << tmp/10 << " " << q << "\n";
	
	return ((vasy*2)>=n);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = n;
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
	cin >> n;
	
	//checkk(1);
	cout << bs();
}
