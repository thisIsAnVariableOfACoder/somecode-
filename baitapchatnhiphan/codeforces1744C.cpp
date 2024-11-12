#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n;
char c;
string s;

int main() {
	cin >> t;
	while(t--) {
		ll i,j,ans;
		cin >> n >> c >> s;
		
		s = s + s;
		ans=-1;
		j=0;
		for(i=2*n-1;i>=0;i--) {
			if (s[i]=='g')
				j = i;
			if ((s[i]==c) && (i<n))
				ans = max(ans,j-i);
		}
		
		cout << ans << "\n";
	}
}
