#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
bool checkk[10005];
ll a[10005];

void back(ll indx) {
    ll i,j;

    for(i = 1; i <= n; i++) {
        if (checkk[i]==false) {
            a[indx] = i;
            checkk[i] = true;
            if (indx==n) {
                for(j = 1; j <= n; j++) {
                    cout << a[j] << " ";
                }
                cout << "\n";
            }
            else
                back(indx+1);
            checkk[i] = false;
        }
    }
}

int main() {
    ll i;
    cin >> n;
    
    for(i = 1; i <= n; i++) {
        checkk[i] = false;
    }

    back(1);
}





