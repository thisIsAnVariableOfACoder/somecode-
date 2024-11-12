#include <bits/stdc++.h>
using namespace std;

#define MOD 14062008

typedef long long ll;

ll n,k,temp;
ll dp[100005];
ll a[100005];

void fastio() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastio();

    ll i;
    cin >> n >> k;
    for(i = 1; i <= n; i++) {
        a[i]=0;
    }
    for(i = 1; i <= k; i++) {
        cin >> temp;

        a[temp]=1;
    }

    dp[0]=0;
    dp[1]=1;
    for(i = 2; i <= n; i++) {
        if (a[i]!=1) {
            dp[i] = (dp[i-1] + dp[i-2])%MOD;
        }
        else {
            dp[i]=0;
        }
    }

    cout << dp[n];
}



