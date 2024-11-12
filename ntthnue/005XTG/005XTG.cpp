#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c;

void read() {
    freopen("005XTG.INP","r",stdin);
    freopen("005XTG.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    cin >> a >> b >> c;

    if (a==b && b==c)
        cout << "D";
    else {
        if ((a+b)>c && (b+c)>a && (a+c)>b) {
            if ((a*a+b*b)==(c*c) || (b*b+c*c)==(a*a) || (a*a+c*c)==(b*b)) {
                cout << "V";
            }
            else if ((a==b) || (b==c) || (a==c)) {
                cout << "C";
            }
            else
                cout << "T";
        }
        else
            cout << "K";
    }

}
