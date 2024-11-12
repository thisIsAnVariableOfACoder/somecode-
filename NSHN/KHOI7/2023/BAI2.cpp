#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
ll x,y,z;

int main() {
    ll i,a;
    cin >> s >> x >> y >> z;

    a = 0;
    for(i = 0; i < (s.size()); i++) {
        if (s[i]>='A' &&  s[i]<='Z' && x > 0) {
            a= a + x;
            x= x-1;
        }
        if (s[i]>='a' && s[i]<='z' && y > 0) {
            a = a + y;
            y = y - 1;
        }
        if (s[i]>='0' && s[i]<='9' && z > 0) {
            a = a + z;
            z = z - 1;
        }
    }

    cout << a;
    // cout << hoa << " " << th << " " << so;
}
