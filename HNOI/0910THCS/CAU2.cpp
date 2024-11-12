#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,i,x,y,z;
    set<int> s;
    cin >> n;

    y = 1;
    z = 1;
    s.insert(1);
    for(i = 3; i <= n; i++) {
        x = (y+z)%100;
        z=y;
        y=x;
        s.insert(x);
    }

    cout << x << endl;
    cout << s.size();
}
