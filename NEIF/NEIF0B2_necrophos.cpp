#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d;

int main() {
    long long x;

    cin >> a >> b >> c >> d;
    x= (a==b) + (a==c) + (a==d) + (b==c) + (b==d) + (c==d);
    cout << (x==3);
}
