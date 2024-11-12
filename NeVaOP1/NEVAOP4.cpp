#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    cout << x-(x%2==1) << endl;
    cout << x+(x%2==1) << endl;
    cout << x-1-((x-1)%2==0) << endl;
    cout << x+1+((x+1)%2==0);
}
