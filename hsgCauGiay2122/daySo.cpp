// cau3
#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);

    long long ans1,ans2,a,i;
    cin >> n;
    ans1 = INT_MIN;
    ans2 = INT_MAX;
    for(i = 1; i <= n; i++) {
        cin >> a;

        if (a>0)
            ans2 = min(ans2,a);
        else
            ans1 = max(ans1,a);
    }

    cout << ans1 << " " << ans2;
}
