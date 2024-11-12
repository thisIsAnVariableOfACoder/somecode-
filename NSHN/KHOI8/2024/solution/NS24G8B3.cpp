#include <bits/stdc++.h>

using namespace std;

long long q;
long long f[500005];

int main() {
    long long i, j, l, r, n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> q;
    n= 500000;
    for (i=0; i<=n; i++)
        f[i]= 0;
    
    for (i=1; i<=n; i++) {
        for (j=i; j<=n; j=j+i)
            f[j]= f[j] + 1; // so uoc so cua boi cua so i cong len 1
        f[i]= f[i-1] + f[i]; // prefixsum
    }

    for (i=1; i<=q; i++) {
        cin >> l >> r;

        cout << f[r] - f[l-1] << "\n";
    }
}