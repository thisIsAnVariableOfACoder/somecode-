#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("017MM.INP","r",stdin);
	freopen("017MM.OUT","w",stdout);
}

int main() {
	read();
	ll maxx,minn,pos1,pos2,i;
	maxx=-1;
	minn=LONG_MAX -1;
	pos1=0;
	pos2=0;
	i=0;
	while(cin>>a) {
		i++;
		if (maxx<a) {
			pos1=i;
			maxx=a;
		}
		if (minn>a) {
			pos2=i;
			minn=a;
		}
	}
	
	cout << pos1 << " " << pos2;
}






