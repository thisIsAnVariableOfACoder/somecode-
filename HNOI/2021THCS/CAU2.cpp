#include <bits/stdc++.h>
using namespace std;

#define codelai ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int total[5005];

void mang(int n) {
    int y;
    for(y = 0; y <= n; y++) total[y] = 0;
}

int main() {
    codelai;
    int n,i,j,maxx,countt;
    char c;
    cin >> n;
    mang(n);
    maxx = INT_MIN;
    countt = 0;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cin >> c;

            if (c=='X') total[j] = total[j] + 1;
            if (i==n) {
                if (total[j]==maxx) {
                    countt = countt + 1;
                }
                else if (total[j]>maxx) {
                    maxx = total[j];
                    countt = 1;
                }
            }
        }
    }

    cout << countt << " " << maxx << "\n"; // dong 1
    for(i = 1; i <= n; i++) {
        if (total[i]==maxx) cout << i << " "; // dong 2
    }
}
