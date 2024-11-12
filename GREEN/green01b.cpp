#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,x,y,s,n,k;
    cin >> t >> x >> y >> s;

    n = s*x;
    k = y*(s+x*t);

    if (n==k) cout << "Fare";
    else if (n<k) cout << "Nam";
    else cout << "Khanh";
    cout << endl;

    cin >> t >> x >> y >> s;

    n = s*x;
    k = y*(s+(x*t));

    if (n==k) cout << "Fare";
    else if (n<k) cout << "Nam";
    else cout << "Khanh";
}
