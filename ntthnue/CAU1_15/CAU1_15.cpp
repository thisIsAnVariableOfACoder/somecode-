#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("CAU1_15.INP","r",stdin);
	freopen("CAU1_15.OUT","w",stdout);
}

int main() {
	read();
	ll x,y,cnt;
	cin >> a >> b >> c;
	
	y=1;
	cnt=0;
	while((y*b)<=c) { // tranh su dung so thuc
		x=(c-b*y);
		cnt += (!(x%a) && (x/a)>0);	// han che dung double
		y++;
	}
	
	cout << cnt;
}








