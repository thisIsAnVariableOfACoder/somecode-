#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("037VT.INP","r",stdin);
	freopen("037VT.OUT","w",stdout);
}

ll n,k;
bool markarr[10005];

int main() {
	read();
	ll i,leftt,cnt;
	cin >> n >> k;
	
	memset(markarr,false,sizeof(markarr));
	i=0;
	leftt=n;
	cnt=0;
	while(leftt>1) {
		i++;
		if (i>n) {
			i=1;
		}
		cnt+=(markarr[i]==false);
		
//		cout << i << " " << markarr[i] << " " << cnt << "\n";
		
		if (cnt==k && markarr[i]==false) {
			leftt--;
			markarr[i]=true;
			cnt=0;
		}
	}
	for(i=1;i<=n;i++) {
		if (markarr[i]==false) {
			cout << i;
			
			break;
		}
	}
}
