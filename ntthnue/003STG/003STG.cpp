// nguyenpk's code

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct position {
    double x;
    double y;
};

position a,b,c;

void read() {
    freopen("003STG.INP","r",stdin);
    freopen("003STG.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

double cal(position temp1, position temp2) {
    double ret,tmp1,tmp2,tmp3;
    tmp1 = abs(temp1.y)-abs(temp2.y);
    tmp2 = abs(temp1.x)-abs(temp2.x);
    tmp3 = abs(temp1.y)+abs(temp2.y);
    if ((temp1.x)==(temp2.x)) {
        ret = abs(tmp1);
    }
    else if ((temp1.y)==(temp2.y)) {
        ret = abs(tmp2);
    }
    else {
        if (((temp1.x)*(temp2.x)>0) && ((temp1.y)*(temp2.y)>0))
            ret = sqrt(pow(tmp1,2) + pow(tmp2,2));
        else
            ret = sqrt(pow(tmp3,2) + pow(tmp2,2));
    }

    return ret;
}

int main() {
    fastIO();
    read();

    double ab,bc,ac,p,heron;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

    // xet cac canh cua tam giac
    ab = cal(a,b);
    bc = cal(b,c);
    ac = cal(a,c);

    if (((ab+bc)<ac) || ((ab+ac)<bc) || ((bc+ac)<ab)) {
        cout << "K";
    }
    else {
        p = (ab+bc+ac)/2;
        heron = sqrt(p*(p-ab)*(p-bc)*(p-ac));

        cout << fixed << setprecision(3) << p*2 << " " << heron;
    }
}





