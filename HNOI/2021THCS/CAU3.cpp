#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s[5010];
char a[5005][5005];
ll n,m;
ll i,j,idx,maxx;
string tr,tr2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(i = 0; i <= max(m,n); i++) {
        s[i] = "";
    }
    for(i = 1; i <= n; ++i) {
        for(j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    for(i = 1; i <= m; ++i) {
        for(j = n; j >= 1; --j) {
            s[i] = s[i] + a[j][i];
        }
    }

    sort(s+1,s+m+1);
    maxx = -1;
    for(i = 1; i < m; ++i) {
        tr = s[i];
        tr2 = s[i+1];
        idx = 0;
        while(tr[idx]==tr2[idx] && idx < n-1) {
            idx++;
        }
        maxx = max(maxx,idx);
    }

    cout << n-maxx-1;
}
