#include <bits/stdc++.h>
using namespace std;

int main() {
    double s1,v1,s2,v2,t;
    cin >> s1 >> v1 >> s2 >> v2;

    t = (s2-s1)/(v1-v2);

    if (t>0) cout << (long long) t;
    else cout << -1;
}
