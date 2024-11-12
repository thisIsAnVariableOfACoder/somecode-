#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll d,m,y,dd,mm,yy;

int main() {
    ll Anna;
    cin >> d >> m >> y >> dd >> mm >> yy;

    if (y<yy) {
        Anna=1;
    }
    else if (y>yy) {
        Anna=0;
    }
    else {
        if (m<mm) {
            Anna=1;
        }
        else if (m>mm) {
            Anna=0;
        }
        else {
            if (d<dd) {
                Anna=1;
            }
            else if (d>dd) {
                Anna=0;
            }
            else {
                Anna=2;
            }
        }
    }

    if (Anna==1) {
        cout << "Anna";
    }
    else if (Anna==0) {
        cout << "Bob";
    }
    else {
        cout << "Same";
    }
}
