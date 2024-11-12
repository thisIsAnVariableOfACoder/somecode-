#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;
ll a[1005];
ll b[1005];

bool checkk(ll q) {
	ll i,curr,j,cnt;
	i = 1;
	cnt = 0;
	while(i<=n) {
		cnt++;
		curr = b[i] + q + q;
		j = i;
		while(j<=n) {
			if (b[j]>curr) {
				break;
			}
			j++;
		}
		i = j;
	}
	
	return (cnt<=k);
}

ll bs() {
	ll l,r,mid;
	l = 0;
	r = 1e6;
	while(l<=r) {
		mid = (l+r)/2;
		if (checkk(mid)==false)
			l = mid + 1;
		else
			r= mid - 1;
	}
	return l;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	freopen("TPS.INP","r",stdin);
	freopen("TPS.OUT","w",stdout);

	ll i,j,pos,ans;
	cin >> n;
	for(i =1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> k;
	
	sort(a+1,a+n+1);
	ans = 1e6+10;
	for(i =1; i <= n; i++) {
		for(j=i; j <= n; j++) {
			b[j-i+1] = a[j];
		}
		for(j= 1; j <= i-1; j++) {
			b[j+n-i+1] = a[j]+1e6;
		}
		pos = bs();
		ans = min(ans,pos);
	}
	
	cout << ans;
}
