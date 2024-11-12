#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x,k;
    cin >> x >> k;

    cout << (x/k)*k << endl;
    cout << (x/k + (x%k))*k << endl;
    cout << (x+1)+((x+1)%k) << endl;
}
