#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll d,m,y,k;
ll a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    ll dong1,dong2,dong3,dong4,dong5;
    cin >> d >> m >> y >> k;

    if (y%100!=0 && y%4==0) {
        a[2]++;
    }
    else if (y%400==0) {
        a[2]++;
    }
    dong1 = a[m];
    
    if (d-(k-2)>=1) {
        dong2 = (d-(k-2))%7;
    }
    else {
        dong2 = d + 7-(k-2);
        dong2 = (dong2 + 7*(ll((a[m]-dong2)/7)))%7;
    }
    dong2 = dong2 + 7*(dong2==0);

    if ((d+(8-k))<=a[m]) {
        dong3 = d+(8-k);
    }
    else {
        dong3 = d-k+1;
    }
    dong3 = dong3 + 7*(ll((a[m]-dong3)/7));

    dong4 = d%7 + 7*(d%7==0);
    dong4 = (7+k-(dong4-1))%7;
    dong4 = dong4 + 7*(dong4==0 || dong4==1);

    if (m!=2) {
        dong5 = (dong4+(a[m]-29))%7;
    }
    else {
        if (a[m]==28)
            dong5 = (dong4+(a[m]-22))%7;
        else 
            dong5 = dong4%7;
    }
    dong5 = dong5 + 7*(dong5==0 || dong5==1);

    cout << dong1 << "\n";
    cout << dong2 << "\n";
    cout << dong3 << "\n";
    cout << dong4 << "\n";
    cout << dong5;
}




