#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("016MM.INP","r",stdin);
	freopen("016MM.OUT","w",stdout);
}

int main() {
	read();
	ll maxx,minn,i;
	maxx=-1;
	minn=LONG_MAX -1;
	i=0;
	while(cin>>a) {
		i++;
		if (maxx<a) {
			maxx=a;
		}
		if (minn>a) {
			minn=a;
		}
	}
	
	cout << maxx << " " << minn;
}






