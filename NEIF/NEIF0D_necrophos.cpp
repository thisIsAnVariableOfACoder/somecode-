#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d, e, f;

int main() {
    cin >> a >> b >> c >> d >> e >> f;
    if (a==d && b==e && c==f)
        cout << "Same";
    else if ((c < f) || (c==f && b < e) || (c==f && b==e && a < d))
        cout << "Anna";
    else
        cout << "Bob";
}
