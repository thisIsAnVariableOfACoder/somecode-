#include <bits/stdc++.h>

using namespace std;

double x1,y11,r1,x2,y2,r2;

int main() {
    double khoangcach,pyta1,pyta2;
    cin >> x1 >> y11 >> r1 >> x2 >> y2 >> r2;

    pyta1 = x1-x2;
    pyta2 = y11-y2;
    khoangcach = sqrt(pyta1*pyta1 + pyta2*pyta2);
    if (khoangcach==0 && r1==r2) {
        cout << 1;
    }
    else if (khoangcach<=abs(r1-r2)) {
        cout << 2;
    }
    else if (khoangcach>=(r1+r2)) {
        cout << 4;
    }
    else {
        cout << 3;
    }
}
