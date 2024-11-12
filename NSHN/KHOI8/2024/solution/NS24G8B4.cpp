#include <bits/stdc++.h>

using namespace std;

long long n, k;
long long f[100005][30], digit[100005];
string s;

long long calc(long long x, long long y) { // tinh xem doan con co bao nhieu loai ki tu o trong
    long long temp, j;
    
    if (digit[y] - digit[x-1] > 0) // kiem tra so
        return k + 1;
    temp= 0;
    for (j=1; j<=26; j++)
        temp= temp + (f[y][j] - f[x-1][j] > 0); // tinh so luong ki tu khac nhau
    return temp;
}

long long bs2(long long x) {
    long long l, r, mid;
    l= x;
    r= n;
    while (l <= r) {
        mid= (l+r)/2;
        if (calc(x, mid) < k)
            l= mid + 1;
        else
            r= mid - 1;
    }
    return l;
}

long long bs3(long long x) {
    long long l, r, mid;
    l= x;
    r= n;
    while (l <= r) {
        mid= (l+r)/2;
        if (calc(x, mid) <= k)
            l= mid + 1;
        else
            r= mid - 1;
    }
    return r;
}

int main() {
    long long i, j, l, r, res;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k;
    cin >> s;
    s= '1' + s + '1';
    digit[0]= 0;
    for (i=1; i<=n; i++)
        digit[i]= digit[i-1] + (int(s[i]) <= 57); // prefix ki tu so
    for (j=1; j<=26; j++)
        f[0][j]= 0;
    for (i=1; i<=n; i++)
        for (j=1; j<=26; j++)
            f[i][j]= f[i-1][j] + (int(s[i])-96==j); // prefix ki tu chu
    res= 0;
    for (i=1; i<=n; i++) {
        l= bs2(i); // tim vi tri dau tien dung
        r= bs3(i); // tim vi tri cuoi cung dung
        if (l <= r)
            if (calc(i, l)==k && calc(i, r)==k) // kiem tra xem co = k hay khong
                res= res + (r - l + 1);
    }
    cout << res;
}