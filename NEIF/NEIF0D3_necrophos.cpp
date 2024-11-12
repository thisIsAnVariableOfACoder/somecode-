#include <bits/stdc++.h>

using namespace std;

long long d, m, y, k;
long long month[13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    long long fiMon, temp, laSun, fiDay, laDay;
    cin >> d >> m >> y >> k;

    if ((y%400==0) || ((y%4==0) && (y%100!=0)))
        month[2]= month[2] + 1;

    cout << month[m] << "\n";
    fiMon= (d + 9 - k - 1)%7 + 1;
    temp= (d + 8 - k - 1)%7 + 1;
    laSun= temp + 7*((month[m] - temp)/7);
    fiDay= ((k - (d - 1) - 2 - 7)%7 + 7)%7  + 2;
    laDay= (k + (month[m] - d) - 2 + 7)%7 + 2;

    cout << fiMon << "\n" << laSun << "\n" << fiDay << "\n" << laDay; 
}
