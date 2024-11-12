#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
    freopen("008PI.INP","r",stdin);
    freopen("008PI.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    ll i,cnt;
    double ans;
    cin >> n;

    ans = 0;
    cnt = 0;
    for(i = 1; i <= 2*n+1; i+=2) {
        ans = ans + (double(1)/double(i))*(cnt%2==0) + (double(-1/double(i)))*(cnt%2!=0);
        cnt++;
    }

    cout << fixed << setprecision(8) << 4*ans;
}
