#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a;

int main() {
    ll temp;
    cin >> a;

    temp = ll(sqrt(2*a));

    if (temp*(temp+1)==2*a) {
        cout << temp;
    }
    else 
        cout << -1;
}
