#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sizee,n;
string m1,m2;

void makeStr() {
    ll i;
    string s;
    m2 = "";
    for(i = 1; i <= n; i++) {
        s = to_string(i);
        m2 = m2 + s;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll i;
    bool coutM1;
    cin >> n;

    makeStr();
    sizee = m2.size();
    coutM1 = false;
    while(sizee>1) {
        m1 = "";
        for(i = 0; i < sizee; i+=2) {
            m1 = m1 + m2[i];
        }
        sizee = m1.size();
        if (sizee<=1) {
            coutM1 = true;
            break;
        }
        else {
            m2="";
            for(i = 1; i < sizee; i+=2) {
                m2 = m2 + m1[i];
            }
            sizee = m2.size();
        }
    }

    if (coutM1) {
        cout << m1;
    }
    else {
        cout << m2;
    }
}
