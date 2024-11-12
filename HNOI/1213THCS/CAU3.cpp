#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nguyenpk ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

string a0;
ll n,m;

ll maxN(ll strSiz) {
    ll i,ret;
    ret = strSiz;
    for(i = 1; i <= n; i++) {
        ret = ret*2;
    }
    return ret;
}

int main() {
    nguyenpk;

    ll pos,sizee;
    cin >> a0 >> n >> m;

    sizee = a0.size();
    if (m<=maxN(sizee)) {
        pos = ll(m/(sizee))+((m%(sizee))!=0);

        if (pos%2!=0) {
            cout << a0[(m%sizee)+(sizee-1)*(m%sizee==0)-(m%sizee>0)];
        }
        else {
            if ((m%sizee)==0) {
                cout << a0[0];
            }
            else {
                cout << a0[sizee-(m%sizee)];
            }
        }
    }
    else {
        cout << -1;
    }
}
