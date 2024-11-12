#include <bits/stdc++.h>

using namespace std;

long long n, k;

bool check(long long x) {
    return ((x%400==0) || ((x%4==0) && (x%100!=0)));
}
int main() {
    long long res;
    cin >> n >> k;
    res= 2;

    res= res + check(n) + check(n+1) + check(n+2);
    k= (k-2+res)%7 + 2;
    cout << k;
}