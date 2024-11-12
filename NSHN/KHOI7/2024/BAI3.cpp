#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll x,y,k;
ll arr[1000005];

ll minMax(bool type) {
    ll ret,i;
    ret = 1 + 8*type;
    for(i = 1; i < k; i++) {
        ret = ret*10 + 9*type;
    }

    return ret;
}

bool nhuan(ll x) {
    if (x%100==0) {
        if (x%400==0) {
            return true;
        }
    }
    else if (x%4==0) {
        return true;
    }
    return false;
}

int main() {
    npk;

    ll i,cnt;
    cin >> x >> y >> k;

    x = max(x,minMax(0));
    y = min(y,minMax(1));
    cnt = 0;
    for(i = x; i <= y; i++) {
        // cout << i << " ";

        if (nhuan(i)) {
            cnt++;
            arr[cnt] = i;
        }
    }
    cnt = cnt - (cnt==0);

    cout << cnt << "\n";
    for(i = 1; i <= cnt; i++) {
        cout << arr[i] << " ";
    }
}
