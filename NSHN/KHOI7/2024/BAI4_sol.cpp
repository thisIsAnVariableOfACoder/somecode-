#include <bits/stdc++.h>

using namespace std;

long long n, q;
long long a[1000005], l[1005], r[1005];

int main() {
    long long i, j, d, p, x, temp, t;
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for (i=1; i<=n; i++)
        cin >> a[i];

    d= 0;
    for (i=1; i<=q; i++) {
        cin >> p;
        if (p==1) {
            d= d+1;
            cin >> l[d] >> r[d]; // luu lai vi tri dao dau
        }
        else {
            cin >> x;
            temp= 0;
            t= a[x];
            for (j=1; j<=d; j++)
                if (l[j] <= x && x <= r[j]) // neu x nam trong khoang dao dau thi cong len so lan dao dau
                    temp= temp+1;
            if (temp%2)
                t= t*-1; // dao dau neu so lan dao la le
            cout << (t > 0)*2 - 1 + (t==0) << "\n"; // in ra
        }
    }
}
