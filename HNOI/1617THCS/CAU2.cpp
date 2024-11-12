#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a[1005],i,j,minn;
    long long ans;
    cin >> n >> k;
    for(i = 1; i <= n; i++) cin >> a[i];

    sort(a+1,a+n+1);
    i = 1;
    ans = 0;
    while(n>=k) {
        minn = INT_MAX;
        for(j = n; j > n-k; j--) {
            minn = min(minn,a[j]);
            ans = ans + a[j];
        }
        ans = ans - minn;
        n = n - k;
    }
    minn = INT_MAX;
    for(j = 1; j <= n; j++) {
        minn = min(minn,a[j]);
        ans = ans + a[j];
    }
    ans = ans - minn*(n>=k);

    cout << ans;
}
