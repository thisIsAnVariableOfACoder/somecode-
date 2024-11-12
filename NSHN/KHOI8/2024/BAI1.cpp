#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,k;

bool leap(ll x) {
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

    ll i,ans;
    cin >> n >> k;

    ans=k;
    for(i = 1; i <= 365*3+(leap(n))+(leap(n+1))+(leap(n+2))-1; i++) {
        ans = ans%7 + 7*(ans%7==0 || ans%7==1);
        ans++;
    }

    cout << ans%7 + 7*(ans%7==0 || ans%7==1);
}




