#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fastio() {ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);}

ll n,k,e,f,x=0,sum=0,ans=1e18,sokhong=0;
ll a[1000005];
ll b[1000005];
bool checkk[1000005];

void back(ll indx) {
    ll i,j;

    if (checkk[indx]==false) {
        ++sokhong;
        for(i = 0 + ((k-x)>(n-k-sokhong)); i <= 1-(x==k); i++) {
            a[indx] += i;
            x += i;
            if (x==k) {
                sum = 0;
                f=0;
                for(j = 1; j <= n; j++) {
                    if (a[j]) {
                        ++f;
                        sum = sum + abs(j-b[f]);
                    }
                }
                ans = min(ans,sum);
            }
            else {
                back(indx+1);
            }
            a[indx]-=i;
            x -= i;
        }
        --sokhong;
    }
    else {
        back(indx+1);   
    }
}

int main() {
    fastio();

    ll i;
    cin >> n >> k;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    e = 0;
    for(i = 1; i <= n; i++) {
        checkk[i] = a[i];
        if (a[i]) {
            ++e;
            b[e] = i;
            a[i]=0;
        }
    }
    back(1);

    cout << ans;
}
