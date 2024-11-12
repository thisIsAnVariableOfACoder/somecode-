#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll x,y,k;

int main() {
    npk;

    ll i,j,t;

    t = 3;
    while(t--) {
        cin >> x >> y >> k;

        if (k<=100) {
            i = x;
            j = x+1;
            while(i!=y && j!=y) {
                i = (i*i + 2)%k;
                j = (j*j + 2)%k;
            }
            
            if (i==y) {
                cout << "Bob" << "\n";
            }
            if (j==y) {
                cout << "Andy" << "\n";
            }
        }
        else {
            if (y%2==x%2) {
                cout << "Bob";
            }
            else {
                cout << "Andy";
            }
            cout << "\n";
        }
    }
}
