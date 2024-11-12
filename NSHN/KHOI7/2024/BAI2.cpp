#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll x,y,m;

int main() {
    cin >> x >> y >> m;

    cout << (x + ll((y+m)/60))%12 << " " << (y+m)%60;
}
