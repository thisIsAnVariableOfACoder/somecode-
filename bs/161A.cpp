#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,x,y;
ll a[100005];
ll b[100005];
ll mark[100005];

ll bs2(ll c) { // b[j] min >= a[i] - x
    ll l,r,mid;
    l = 1;
    r = m;
    while(l<=r) {
        mid = (l+r)/2;
        if (b[mid]<c) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return l;
}

ll bs3(ll c) { // b[i] max <= a[i] + y
    ll l,r,mid;
    l = 1;
    r = m;
    while(l<=r) {
        mid = (l+r)/2;
        if (b[mid]<=c) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return r;
}

int main() {
    ll i,temp1,temp2,cnt;
    cin >> n >> m >> x >> y;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(i = 1; i <= m; i++) {
        cin >> b[i];
    }

    for(i = 1; i <= m; i++) {
        mark[i]=0;
    }
    cnt=0;
    for(i = 1; i <= n; i++) {
        temp1 = bs2(a[i]-x);
        temp2 = bs3(a[i]+y);
        if (temp1>0 && temp1<=m && temp2>0 && temp2<=m) {
            if (mark[temp1]==0 && ((a[i]-x)<=b[temp1]) && ((a[i]+y)>=b[temp1])) {
                mark[temp1] = i;
                cnt++;
            }
            else if (mark[temp2]==0 && ((a[i]-x)<=b[temp2]) && ((a[i]+y)>=b[temp2])) {
                mark[temp2] = i;
                cnt++;
            }
        }
        
        cout << a[i] << " " << b[temp1] << " " << b[temp2] << "\n";
    }

    cout << cnt << "\n";
    for(i = 1; i <= m; i++) {
        if (mark[i]>0) {
            cout << mark[i] << " " << i << "\n";
        }
    }
}
