#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,d;

int main() {
    cin >> a >> b >> c >> d;

    cout << (a==(b+c+d)) + (b==(a+c+d)) + (c==(a+b+d)) + (d==(a+b+c));
}
