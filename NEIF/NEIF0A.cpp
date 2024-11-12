#include <bits/stdc++.h>
using namespace std;

long long a;

int main() {
    cin >> a;

    if (a%2==0) {
        cout << "Even";
    }
    else 
        cout << "Odd";
    cout << "\n";
    if (a>0) {
        cout << "Positive";
    }
    else if (a==0) {
        cout << "Unsigned";
    }
    else {
        cout << "Negative";
    }
}
