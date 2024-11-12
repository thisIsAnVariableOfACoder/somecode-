#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nguyenpk ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll n,t,q,u,v;
ll a[5005][5005];
struct tDong
{
    ll k;
    ll rc;
    ll x;
    ll y;
} ts[100005];

int main() {
    nguyenpk;

    ll i,j,ans;
    cin >> n >> t;
    for(i = 1; i <= t; i++) {
        cin >> ts[i].k >> ts[i].rc >> ts[i].x >> ts[i].y;
    }
    cin >> q;
    if (q <= 500) {
        for(i = 1; i <= q; i++) {
            cin >> u >> v;

            ans = 0;
            for(j = 1; j <= t; j++) {
                if (ts[j].k==1) {
                    if (u==ts[j].rc && v>=ts[j].x && v<=ts[j].y) {
                        if (v<=((ts[j].x)+(ts[j].y))/2) {
                            ans = ans + v-(ts[j].x)+1;
                        }
                        else {
                            ans = ans + (ts[j].y)-v+1;
                        }
                    }
                }
                else {
                    if (v==ts[j].rc && u>=ts[j].x && u<=ts[j].y) {
                        if (u<=((ts[j].x)+(ts[j].y))/2) {
                            ans = ans + u-(ts[j].x)+1;
                        }
                        else {
                            ans = ans + (ts[j].y)-u+1;
                        }
                    }
                }
            }

            cout << ans << "\n";
        }
    }
    else {
        ll dx;
        for(i = 0; i <= n+1; i++) {
            for(j = 0; j <= n+1; j++) {
                a[i][j]=0;
            }
        }
        for(i = 1; i <= t; i++) {
            dx = ts[i].y;
            for(j = ts[i].x; j <= (ts[i].x + ts[i].y)/2; j++) {
                if (ts[i].k==1) {
                    a[ts[i].rc][j] += j-ts[i].x+1;
                    if (dx!=j)
                        a[ts[i].rc][dx] += j-ts[i].x+1;
                }
                else if (ts[i].k==2) {
                    a[j][ts[i].rc] += j-ts[i].x+1;
                    if (dx!=j)
                        a[dx][ts[i].rc] += j-ts[i].x+1;
                }
                dx--;
            }
        }

        for(i = 1; i <= q; i++) {
            cin >> u >> v;

            cout << a[u][v] << "\n";
        }
    }
}
