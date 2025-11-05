#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n; // Khai bao bien toan cuc

void read() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("010DT.INP", "r", stdin);
    freopen("010DT.OUT", "w", stdout);
}

int main() {
    read();
    ll cnt,to50,to20,soTienConLai;
    cin >> n;
    
	cnt = 0;
    // Duyet tat ca cach chon so to 50
    for (to50 = 0; to50 * 50 <= n; to50++) {
        // Duyet tat ca cach chon so to 20 sau khi tru to50 * 50
        for (to20 = 0; to50 * 50 + to20 * 20 <= n; to20++) {
            // So tien con lai se la so to 10
            soTienConLai = n - (to50 * 50 + to20 * 20);
            cnt += (soTienConLai % 10 == 0); // Neu con lai chia het 10 thi do la 1 cach hop le
        }
    }
    
    cout << cnt;
}
