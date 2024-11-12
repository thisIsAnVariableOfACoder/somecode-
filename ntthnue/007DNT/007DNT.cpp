//nguyenpk's code

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
bool prime[50000005];

void read() {
    freopen("007DNT.INP","r",stdin);
    freopen("007DNT.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void seiveAratuthen() {
    ll i,j;
    memset(prime,true,sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for(j = i*i; j <= n; j+=i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    fastIO();
    read();

    ll i,cnt;
    cin >> n;

    seiveAratuthen();
    cnt = 0;
    for(i = 2; i <= n; i++) {
        if (prime[i]) {
            cnt++;
        }
    }

    cout << cnt;
}

