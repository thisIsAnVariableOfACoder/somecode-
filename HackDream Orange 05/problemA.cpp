#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll d,m,y,k;

ll a[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    npk;

    ll i,j,k1,k2;
    cin >> d >> m >> y >> k;

    if ((y%100==0)) {
        if (y%400==0) {
            a[2]++;
        }
    }
    else if (y%4==0) {
        a[2]++;
    }
    i = m;
    j = d;
    k1 = k;
    while(i >= 1) {
        if (i==1) {
            if (j > 1) {
                if (k1==2) {
                    k1 = 8;
                }
                else {
                    k1--;
                }
            }
        }
        else {
            if (k1==2) {
                k1 = 8;
            }
            else {
                k1--;
            }
        }
        if (j==1) {
            i--;
            j = a[i];

            // cout << i << "\n";
        }
        else {
            j--;
        }

        // cout << i << " " << j << "\n";
    }
    // cout << "\n";
    i = m;
    j = d;
    k2 = k;
    while(i <= 12) {
        if (j==a[i]) {
            i++;
            j=1;

            // cout << i << "\n";
        }
        else {
            j++;
        }
        if (i==12) {
            if (j < 31) {
                if (k2==8) {
                    k2=2;
                }
                else {
                    k2++;
                }
            }
        }
        else {
            if (k2==8) {
                k2=2;
            }
            else {
                k2++;
            }
        }

        // cout << i << " " << j << "\n";
    }

    cout << k1 << " " << k2;
}
