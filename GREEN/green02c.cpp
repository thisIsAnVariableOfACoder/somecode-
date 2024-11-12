#include <bits/stdc++.h>
using namespace std;

int main() {
    long long i,n,m,x,y,a,b;
    string s;
    cin >> x >> y >> n;
    a = x;
    b = y;

    for(i = 1; i <= n; i++) {
        cin >> s >> m;

        if (s=="UP") y = y + m;
        else if (s=="DOWN") y = y - m;
        else if (s=="LEFT") x = x - m;
        else if (s=="RIGHT") x = x + m;
    }

    cout << fixed << setprecision(2) << sqrt((x-a)*(x-a)+(y-b)*(y-b));
}
