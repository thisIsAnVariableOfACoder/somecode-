#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll m,n,k;
ll a[1000005];

int main() {
    npk;

    ll i,j,temp,ans,c;
    cin >> m >> n >> k;

    c = 1;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            if (j>1) {
                temp = a[c-1] + i;
                a[c] = temp;
            }
            else {
                a[c] = 1;
            }
            c++;
        }
    }
    sort(a+1,a+c);
    ans=0;
    for(i = 1; i <= c-1; i++) {
        ans += (a[i]==a[k]);

        // cout << a[i] << " ";
    }

    cout << a[k] << " " << ans;
}
