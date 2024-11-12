#include <bits/stdc++.h>
using namespace std;

#define MOD 14062008

typedef long long ll;

ll n,k,temp;
ll dp[100005];
ll a[100005];

void fastio() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

ll dq(ll x) {
    if (dp[x]!=-1) {
        return dp[x];
    }

    if (a[x]!=1) {
        dp[x] = (dq(x-1) + dq(x-2))%MOD;
    }
    else {
        dp[x]=0;
    }

    return dp[x];
}

int main() {
    fastio();

    ll i;
    cin >> n >> k;
    for(i = 0; i <= n; i++) {
        a[i]=0;
    }
    for(i = 1; i <= k; i++) {
        cin >> temp;

        a[temp]=1;
    }

    for(i = 0; i <= n; i++) {
        dp[i]=-1;
    }
    dp[0]=0;
    dp[1]=1;
    dq(n);

    cout << dp[n];
}
