#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef long long ll;

#define priorityNguyen ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll n;
pair<ll,ll> dt[10005];
bool mak[10005];
priority_queue<ll, vector<ll>, greater<ll>> endd;

int main() {
    priorityNguyen;

    ll i,d,t;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> d >> t;
        dt[i] = make_pair(d,t);
    }

    sort(dt+1,dt+n+1);
    endd.push(dt[1].fi + dt[1].se);
    for(i = 2; i <= n; i++) {
        if (endd.top() <= dt[i].fi) {
            endd.pop();
        }
        endd.push(dt[i].fi + dt[i].se);
    }

    cout << endd.size();
}

