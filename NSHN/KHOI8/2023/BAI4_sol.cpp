#include <bits/stdc++.h>

using namespace std;

long long n, k;
long long a[100005];

int main() {
    long long i, j, res;
    string s;

    cin >> n >> k;
    cin >> s;

    for (i=0; i<n; i++)
        if (int(s[i]) <= 57)
            a[i+1]= 0;
        else if (int(s[i]) <= 90)
            a[i+1]= 1;
        else
            a[i+1]= 2;
    a[n+1]= 0;

    res= 0;
    j= 0;
    for (i=1; i<=n; i++) {
        if (j<i)
            j = j+1;
        if (a[j]!=0) {
            if (k>1)
                while (a[j+1]+a[j]==3) {
                    j= j+1;
                    if (j-i+1==k)
                        break;
                }
            res= res + j-i+1;
        }
    }

    cout << res;
}
