#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n;
ll a[105];

int main() {
    npk;

    ll i,j,k,cnt;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cnt = 0;
    for(i = 1; i <= n-2; i++) {
        for(j = i+1; j <= n-1; j++) {
            for(k = j+1; k <= n; k++) {
                cnt += (((a[i]+a[j])>a[k]) && ((a[j]+a[k])>a[i]) && ((a[i]+a[k])>a[j]) && ((a[i]==a[j]) || (a[j]==a[k]) || (a[i]==a[k])));
            }
        }
    }

    cout << cnt;
}




