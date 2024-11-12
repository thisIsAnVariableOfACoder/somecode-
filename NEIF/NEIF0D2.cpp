#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll y;

int main() {
    cin >> y;

    if (y%100!=0) {
        if (y%4==0) {
            cout << "Leap";
        }
        else {
            cout << "Normal";
        }
    }
    else if (y%400==0) {
        cout << "Leap";
    }
    else {
        cout << "Normal";
    }
}
