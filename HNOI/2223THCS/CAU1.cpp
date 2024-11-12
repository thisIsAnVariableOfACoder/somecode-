#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin >> n;
    while(n--) {
        cin >> t;

        if (t>=60) {
            t = t - 60;

            cout << "09:";
        }
        else cout << "08:";

        if (t<10) cout << "0";
        cout << t << endl;
    }
}
