#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;

void read() {
    freopen("000TCS.INP","r",stdin);
    freopen("000TCS.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    cin >> s;

    cout << (s[0]+s[1]+s[2])-(3*'0');
}
