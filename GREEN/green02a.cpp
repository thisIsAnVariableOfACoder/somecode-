#include <bits/stdc++.h>
using namespace std;

long long a[13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int d,m,y,i;
    cin >> d >> m >> y;

    if ((y%4==0 && y%100!=0) || (y%400==0))
        a[2]++;
    for(i = 1; i <= 12; i++)
        a[i] = a[i-1]+a[i];
    d = d + a[m-1];

    cout << d;
}
