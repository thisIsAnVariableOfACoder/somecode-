#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,l;
ll w[6005];
ll dp[6005];

int main() {
    ll i,j,s;
    cin >> n >> l;
    for(i = 1; i <= n; i++) {
        cin >> w[i];
    }

    for(i = 1; i <= n; i++) {
        s = w[i];
        j = i;
        dp[i] = l+1;
        while(j>0 && s<=l) {
            dp[i] = min(dp[i],max(dp[j-1],l-s));
            --j;
            s += w[j];
        }
    }

    cout << dp[n];
}



