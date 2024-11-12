#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct inp {
    ll p,k;
} a[10005];

ll n;
ll dp[10005];


bool cmp(inp x, inp y) { // sort theo thoi gian ket thuc
    return (x.k < y.k);
}

ll bs3(ll endd, ll val) { // chat nhi phan tim vi tri cua thoi gian ket thuc gan nhat voi thoi gian bat dau hien tai
    ll l,r,mid;
    l = 1;
    r = endd;
    while(l<=r) {
        mid = (l+r)/2;
        if (a[mid].k <= val) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return r;
}

int main() {
    ll i,temp;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i].p >> a[i].k;
    }

    sort(a+1,a+n+1,cmp); 
    dp[1] = a[1].k - a[1].p; // yeu cau su dung ket thuc som nhat
    for(i = 2; i <= n; i++) {
        temp = bs3(i-1,a[i].p);
        dp[i] = max(dp[i-1] , dp[temp] + a[i].k - a[i].p); // thoi gian su dung hoi truong lon nhat tinh den yeu cau thu i
    }

    cout << dp[n];
}





