#include <bits/stdc++.h>
using namespace std;
#define M1 1000000

typedef long long ll;

ll x,y;

int main() {
    ll bac=0;
    ll giamtrugiacanh,tn;
    cin >> x >> y;

    giamtrugiacanh = 11000000 + (4400000)*y;
    tn = x*M1 - giamtrugiacanh;
    if(tn<=5*M1) {
        tn/=20;
        bac=1;
    }
    else if (tn<=10*M1) {
        tn = tn/10 - 250000;
        bac=2;
    }
    else if (tn<=18*M1) {
        tn = (3*tn)/20 - 750000;
        bac=3;
    }
    else if (tn<=32*M1) {
        tn = tn/5 - 1650000;
        bac=4;
    }
    else if (tn<=52*M1) {
        tn = tn/4 - 3250000;
        bac=5;
    }
    else if (tn<=80*M1) {
        tn = (3*tn)/10 - 5850000;
        bac=6;
    }
    else {
        tn = (7*tn)/20 - 9850000;
        bac=7;
    }

    cout << bac << " " << max(tn,ll(0));
}
