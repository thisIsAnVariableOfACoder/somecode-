#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("060DKG.INP","r",stdin);
    freopen("060DKG.OUT","w",stdout);
}

ll n;
ll a[1005];

int main() {
    read();
    ll i,j,cnt,maxx,leng;
    cin >> n;
    for(i=1;i<=n;i++) {
        cin >> a[i];
    }

    cnt=0;
    maxx=1;
    for(i=1;i<n;i++) {
        leng=1;
        for(j=i;j<=n;j++) {
            // cout << a[j] << " ";

            if (a[j]<=a[j+1]) {
                leng++;
            }
            else{
                // cout << leng << "\n";

                break;
            }

            // cout << leng << "\n";
        }
        cnt += leng==maxx;
        if (leng>maxx) {
            maxx=leng;
            cnt=1;
        }
    }

    cout << maxx << "\n" << cnt;
}



