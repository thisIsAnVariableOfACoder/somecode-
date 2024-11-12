#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n;
ll a[5000005];

int main() {
    npk;
    
    ll i,cnt,curr;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a+1,a+n+1);
    curr = -1;
    cnt=0;
    a[n+1] = -1;
    for(i = 1; i <= n+1; i++) {
        if (a[i]!=curr) {
            if (cnt%2) {
                cout << curr;
                
                break;
            }
            curr = a[i];
            cnt=1;
        }
        else
            cnt++;
    }
}



