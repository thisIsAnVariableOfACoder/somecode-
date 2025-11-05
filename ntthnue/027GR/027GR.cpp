#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("027GR.INP","r",stdin);
	freopen("027GR.OUT","w",stdout);
}

double R,Max;

int main() {
	read();
	double ans,fl,ce;
	ll q,p,i;
	cin >> R >> Max;

	ans=10005;
	for(i=1;i<=Max;i++) {
		fl = ll(R*i);
		ce = (fl+(R!=ll(R)));
		if (abs(fl/i-R)<ans) {
			ans = abs(fl/i-R);
			p=fl;
			q=i;
		}
		if (abs(ce/i-R)<ans) {
			ans=abs(ce/i-R);
			p=ce;
			q=i;
		}
		
//		cout << i << " " << ans << " " << fl << " " << abs(fl-R*i) << " " << ce << " " << abs(ce-R*i) << "\n";
	}
	
	cout << p << " " << q;
}





