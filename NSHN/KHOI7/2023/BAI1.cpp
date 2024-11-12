#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

char s;
ll x,y;

int main() {
    npk;

    ll i,ans;
    cin >> s >> x >> y;

    i = x;
    ans = s;
    while(i>0) {
        ans += y;
        if (y<0) {
            while(ans<65) {
                ans += 26;
            }
        }
        else {
            while(ans > 90) {
                ans -= 26;
            }
        }

        cout << char(ans);

        i--;
    }
}
