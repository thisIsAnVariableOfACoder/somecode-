#include <bits/stdc++.h>
using namespace std;

long long h;
long long a[1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n,i,maxx,minn,cnt;
    cin >> n >> h;
    for(i = 1; i <= n; i++) cin >> a[i];

    sort(a+1,a+n+1);
    maxx = a[1];
    minn = a[1];
    i = 2;
    cnt = 1;
    while(i<=n) {
        maxx = max(maxx,a[i]);
        minn = min(minn,a[i]);
        if ((maxx-minn)>h) {
            cnt++;
            maxx = a[i];
            minn = a[i];
        }
        i++;
    }

    cout << cnt;
}
