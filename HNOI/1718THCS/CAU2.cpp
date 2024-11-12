#include <bits/stdc++.h>
using namespace std;
#define n10e5 100000

int a[200005];

int main() {
    int n,x,i,ans;
    cin >> n;

    ans = 0;
    for(i = 1; i <= n; i++) {
        cin >> x;

        if (a[x*(-1)+n10e5]==1) ans = ans + 1;
        a[x+n10e5] = 1;
    }

	cout << ans;
}

