#include <bits/stdc++.h>
using namespace std;

int main() {
    string arn,xs;
    int countt;
    size_t fin;
    cin >> arn >> xs;

    countt = 0;
    fin = arn.find(xs);
    while(fin!=string::npos) {
        countt = countt + 1;
        fin = fin + xs.size();
        fin = arn.find(xs,fin);
    }

    cout << countt;
}
