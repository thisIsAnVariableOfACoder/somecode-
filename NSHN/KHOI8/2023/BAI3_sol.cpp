#include <bits/stdc++.h>

using namespace std;

long long m, n, k;
long long a[1005][1005];

long long calc(long long x, long long y, long long l) { // cong thuc tinh canh
    return a[x][y] - a[x-l][y] - a[x][y-l] + a[x-l][y-l];
}

int main() {
    long long i, j, res, temp;

    cin >> m >> n >> k;
    for (i=0; i<=m; i++)
        a[i][0]= 0;
    for (i=0; i<=n; i++)
        a[0][i]= 0;

    for (i=1; i<=m; i++)
        for (j=1; j<=n; j++) {
            cin >> a[i][j];
            a[i][j]= a[i-1][j] + a[i][j-1] - a[i-1][j-1] + a[i][j]; // prefixsum 2D array
        }
    
    res= -1000000000000001;
    for (i=k; i<=m; i++) // for cac vi tri o vuong chua tong cua hinh vuong
        for (j=k; j<=n; j++) {
            temp= calc(i,j,k) - calc(i-1, j-1, k-2); // tinh canh bang cach lay tong hinh vuong tru di hinh vuong nho ben trong
            res= (temp > res ? temp : res); // luu lai o vuong max
        }
    
    cout << res;
}
