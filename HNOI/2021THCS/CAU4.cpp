#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,t,q,k,rc,x,y,u,v;
ll a[5005][5005];

int main() {
    ll i,j,dx;
    cin >> n >> t;
    
    for(i = 0; i <= n+1; i++) {
        for(j = 0; j <= n+1; j++) {
            a[i][j]=0;
        }
    }

    for(i = 1; i <= t; i++) {
        cin >> k >> rc >> x >> y;

        dx = y;
        for(j = x; j <= (y+x)/2; j++) {
            if (k==1) {
                a[rc][j] += j-x+1;
                if (dx!=j)
                    a[rc][dx] += j-x+1;
            }
            else if (k==2) {
                a[j][rc] += j-x+1;
                if (dx!=j)
                    a[dx][rc] += j-x+1;
            }
            dx--;
        }
    }
    cin >> q;
    for(i = 1; i <= q; i++) {
        cin >> u >> v;

        cout << a[u][v] << "\n";
    }
    // for(i = 1; i <= n; i++) {
    //     for(j=1; j <= n; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}

