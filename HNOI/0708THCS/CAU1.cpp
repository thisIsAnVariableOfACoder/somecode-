#include <bits/stdc++.h>
using namespace std;

int sumS(string s) {
    int sum;
    sum = 0;
    for(auto x : s) sum = sum + x;

    return sum;
}

int main() {
    string n;
    int dong1;
    cin >> n;

    dong1 = sumS(n);

    cout << dong1%10 << " " << dong1 << endl;

}
