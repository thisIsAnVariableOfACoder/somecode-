#include <bits/stdc++.h>

using namespace std;

long long n;
long long a[105];

bool check(long long x, long long y, long long z) {
    return (((x+y>z) && (x+z>y) && (y+z>x)) && ((x==y) || (x==z) || (y==z)));
}
int main() {
    long long res, i, j, k;
    cin >> n;
    for (i=1; i<=n; i++)
        cin >> a[i];

    res= 0;
    for (i=1; i<=n-2; i++) 
        for (j=i+1; j<=n-1; j++)
            for (k=j+1; k<=n; k++)
                res= res+ check(a[i], a[j], a[k]);
    
    cout << res;
}