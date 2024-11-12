#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[105];
pair<ll,ll> b[105];

int main() {
    ll i,j,maxx,temp;
    string tmpString;
    cin >> n;
    maxx = -1;
    for(i = 1; i <= n; i++) {
        cin >> a[i];

        tmpString = to_string(a[i]);
        maxx = max(maxx,ll(tmpString.size()));
    }

    for(i = 1; i <= n; i++) {
        tmpString = to_string(a[i]);
        temp = a[i];
        while (tmpString.size()<maxx) {
            a[i]=a[i]*10;
            tmpString = to_string(a[i]);
        }
        b[i] = make_pair(a[i],temp);
    }
    sort(b+1,b+n+1);
    
    for(i = n; i >= 1; i--) {
        cout << b[i].second;
    }
}

