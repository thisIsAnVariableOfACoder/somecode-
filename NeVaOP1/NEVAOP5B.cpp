#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    long long x;
    cin >> c >> x;

    c = char(c*(x<(c-97+1))+122*(x>=(c-97+1))-((x-(c-97+1)*(x>=(c-97+1)))%26));
    c = char(122-c+97);
    c = char(97+(c-97+x%26)%26);

    cout << c;
}
