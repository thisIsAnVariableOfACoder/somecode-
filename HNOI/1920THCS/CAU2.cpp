#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,i;
    set<int> s;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a;

        s.insert(a);
    }

    cout << s.size();
}
