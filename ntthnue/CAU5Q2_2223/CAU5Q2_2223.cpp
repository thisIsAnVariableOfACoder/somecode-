#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll arrsiz=1e5+5;
ll n,m;
ll prefx[arrsiz];
ll prefy[arrsiz];

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("CAU5Q2_2223.INP","r",stdin);
	freopen("CAU5Q2_2223.OUT","w",stdout);
}

void prefixHang() {
	ll i,tmp;
	prefx[1]=m*(m+1)/2;
	tmp=0;
	for(i=2;i<=n;i++) {
		tmp += m*m;
		prefx[i]=prefx[i-1]+prefx[1]+tmp;
	}
}

void prefixCot() {
	ll i,tmp;
	prefy[1]=(n*(1+(1+(n-1)*m)))/2;
	tmp=0;
	for(i=2;i<=m;i++) {
		tmp += n;
		prefy[i]=prefy[i-1]+prefy[1]+tmp;
	}
}

int main() {
	read();
	
	ll i,ans;
	cin >> n >> m;
	
	prefixHang();
	prefixCot();
	
//	for(i=1;i<=n;i++) {
//		cout << prefx[i] << " ";
//	}
//	cout << "\n";
//	for(i=1;i<=m;i++) {
//		cout << prefy[i] << " ";
//	}
//	cout << "\n";
	
	ans=1e10;
	for(i=1;i<=n;i++) {
		ans = min(ans,abs(prefx[i]-(prefx[n]-prefx[i])));
	}
	for(i=1;i<=m;i++) {
		ans = min(ans,abs(prefy[i]-(prefy[m]-prefy[i])));
	}
	
	cout << ans;
}





