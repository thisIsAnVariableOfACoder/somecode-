#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,s,dis,ans=2e9;
ll a[1005][1005];
bool checkk[1005];
ll b[1005];
ll c[1005];

void back(ll indx) {
    ll i,j;

    for(i = 1; i <= n; i++) {
        if (checkk[i]==false) {
            b[indx] = i;
            checkk[i] = true;
            if (indx==n) {
                dis = 0;
                for(j = 2; j <= n; j++) {
                    dis += a[b[j-1]][b[j]];
                }
                if(dis<ans) {
                    ans = dis;
                    for(j = 1; j <= n; j++) {
                        c[j] = b[j];
                    }
                }
            }
            else 
                back(indx+1);
            checkk[i] = false;
        }
    }
}

int main() {
    ll i,j;
    cin >> n >> s;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 1; i <= n; i++) {
        checkk[i] = false;
    }
    checkk[s] = true;
    b[1] = s;
    back(2);

    cout << ans << "\n";
    for(i = 1; i <= n; i++) {
        cout << c[i] << " ";
    }
}




