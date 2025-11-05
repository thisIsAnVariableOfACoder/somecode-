#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MAXN = 1000000;

ll n;
ll tong[MAXN + 5];  // Mảng lưu tổng các ước số
bool markarr[MAXN + 5];  // Đánh dấu số đã xét

void read() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    freopen("025HN.INP", "r", stdin);
    freopen("025HN.OUT", "w", stdout);
}

// **Sàng Eratosthenes cải tiến để tính tổng ước của mọi số <= N**
void sieveSumDivisors(ll limit) {
    ll i, j;
    for (i = 1; i <= limit; i++) tong[i] = 1;
    
    for (i = 2; i <= limit; i++) {
        for (j = i + i; j <= limit; j += i) {
            tong[j] += i;
        }
    }
}

ll countAmicablePairs(ll limit) {
    ll ans, i;
    memset(markarr, false, sizeof(markarr));

	ans=0;
    for (i = 1; i <= limit; i++) {
        if (!markarr[i] && tong[i] <= limit && tong[i] != i) {
            if (tong[tong[i]] == i) {  // Kiểm tra cặp số hữu nghị
                ans++;
                markarr[i] = true;
                markarr[tong[i]] = true;
            }
        }
    }
    return ans;
}

int main() {
    read();
    cin >> n;
    
    sieveSumDivisors(n);  // Tiền xử lý tổng ước số nhanh
    ll ans = countAmicablePairs(n);
    
    cout << ans;
}
