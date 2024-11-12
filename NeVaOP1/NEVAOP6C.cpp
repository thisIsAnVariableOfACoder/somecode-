#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d,e,chan,le;
    cin >> a >> b >> c >> d >> e;

    chan = a*(a%2==0)+b*(b%2==0)+c*(c%2==0)+d*(d%2==0)+e*(e%2==0);
    le = a*(a%2!=0)+b*(b%2!=0)+c*(c%2!=0)+d*(d%2!=0)+e*(e%2!=0);

    cout << abs(chan-le);
}
