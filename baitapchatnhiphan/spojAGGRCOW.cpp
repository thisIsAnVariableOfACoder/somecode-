#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,c;
ll a[100005];

bool checkk(ll q) {
	ll i,tmp,pos;
	tmp = c-1;
	pos = 1;
	for(i = 1; i <= n; i++) {
		if (tmp<=0)
			break;
		if (a[i]>=(pos+q)) {
			tmp--;
			pos = a[i];
		}
	}
	
	return (tmp>0);
}

ll bs() {
	ll l,r,mid;
	l = 1;
	r = ((a[n]-a[1])/(c-1))+1;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid)==false)
			l = mid + 1;
		else
			r = mid - 1;
	}
	
	return r;
}

int main() {
	cin >> t;
	while(t--) {
		ll i;
		cin >> n >> c;
		for(i = 1; i <= n; i++)
			cin >> a[i];
		
		sort(a+1,a+n+1);
		
		cout << bs() << "\n";
		//checkk(2);
	}
}
