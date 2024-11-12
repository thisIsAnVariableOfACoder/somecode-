#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll k;
ll uoc[100005];
map<ll,bool> arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("CAU2.INP","r",stdin);
	freopen("CAU2.OUT","w",stdout);
	
	cin >> k;
	
	ll i,j,cnt,tmp,tich;
	for(i = 0; i <= 1000000; i++)
		arr[i] = false;
	cnt = 0;
	for(i = 1; i <= ll(sqrt(k))+1; i++) {
		if (k%i==0) {
			cnt++;
			uoc[cnt] = i;
			arr[i] = true;
			if (arr[k/i]!=true) {
				cnt++;
				uoc[cnt] = k/i;
				arr[k/i] = true;
			}
		}
	}
	tmp = cnt;
	for(i = 1; i <= tmp; i++) {
		for(j = i; j <= tmp; j++) {
			tich = (uoc[i])*(uoc[j]);
			if (arr[tich]==false) {
				cnt++;
				arr[tich]=true;
			}
		}
	}
	
	cout << cnt;
}

