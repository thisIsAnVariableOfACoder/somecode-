#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    cout << ((a>=b)&&(a>=c))+((b>=a)&&(b>=c))+((c>=b)&&(c>=d))+((d>=c)&&(d>=e))+((e>=d)&&(e>=c));
}
