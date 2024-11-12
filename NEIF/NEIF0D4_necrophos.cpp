#include <bits/stdc++.h>

using namespace std;

long long d, m, y, k;
long long month[13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    long long dpre, mpre, ypre, dnext, mnext, ynext, kpre, knext;
    cin >> d >> m >> y >> k;

    kpre= (k-2 + 6)%7 + 2;
    knext= (k-2 + 1)%7 + 2;
    if ((y%400==0) || ((y%4==0) && (y%100!=0)))
        month[2]= month[2] + 1;

    if (d==1) {
        ypre= y - (m==1);
        mpre= (m+10)%12 + 1;
        dpre= month[mpre];
    }    
    else {
        dpre= d - 1;
        mpre= m;
        ypre= y;
    }
    cout << dpre << " " << mpre << " " << ypre << " " << kpre << "\n";
    if (d==month[m]) {
        ynext= y + (m==12);
        mnext= m%12 + 1;
        dnext= 1;
    }
    else {
        dnext= d + 1;
        mnext= m;
        ynext= y;
    }
    
    cout << dnext << " " << mnext << " " << ynext << " " << knext;
}
