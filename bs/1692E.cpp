#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,s;
ll a[200005];

int main() {
    ll i,j,sum,ans;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        for(i = 1; i <= n; i++) {
            cin >> a[i];
        }

        ans = -1;
        for(i = 1; i <= n; i++) {
            sum = 0;
            for(j = i; j <= n; j++) {
                if (sum==s) {
                    break;
                }
                else {
                    sum += a[i];
                }
            }
            ans = max(ans,(sum==s)*(j-i+1));
        }

        if (ans>0) {
            cout << n-ans;
        }
        else {
            cout << -1;
        }
        cout << "\n";
    }
}
