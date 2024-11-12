#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[10005];

void back(ll indx) {
    ll i,j;

    for(i = 0; i <= 1; i++) {
        a[indx] = i;
        if (indx==n) {
            for(j = 1; j <= n; j++) {
                cout << a[j] << " ";
            }
            cout << "\n";
        }
        else 
            back(indx+1);
    }
}

int main() {
    cin >> n;

    back(1);
}
