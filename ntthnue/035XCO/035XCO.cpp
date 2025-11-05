#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Các biến toàn cục (nếu cần)
ll m, n;
ll arr[10000005];
ll spiral[10005][10005];

// Hàm cài đặt freopen
void read() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // Mở file để đọc ghi
    freopen("035XCO.INP", "r", stdin);
    freopen("035XCO.OUT", "w", stdout);
}

int main() {
    read();

    ll i, j;
    ll top, bottom, left_, right_, idx; 
    // (Đặt tên cột left_ thay vì left để tránh trùng keyword C++)

    cin >> m >> n;
    
	i = 0;
    j = 0;
    top = 0;
    bottom = 0;
    left_ = 0;
    right_ = 0;
    idx = 0;
    // Đọc m*n phần tử vào arr (bắt đầu từ 1)
    for (i = 1; i <= m*n; i++) {
        cin >> arr[i];
    }

    // Sắp xếp mảng
    sort(arr + 1, arr + (m*n) + 1);

    // Thiết lập lại các biến điều khiển xoắn ốc (1-based)
    top    = 1;
    bottom = m;
    left_  = 1;
    right_ = n;
    idx    = 1;

    // Xếp các phần tử theo vòng xoắn ốc
    while (top <= bottom && left_ <= right_) {
        // 1) Đi từ cột left_ -> right_ trên hàng top
        for (i = left_; i <= right_; i++) {
            spiral[top][i] = arr[idx];
            idx++;
        }
        top++;

        // 2) Đi từ hàng top -> bottom trên cột right_
        for (i = top; i <= bottom; i++) {
            spiral[i][right_] = arr[idx];
            idx++;
        }
        right_--;

        // 3) Nếu còn hợp lệ, đi từ cột right_ -> left_ trên hàng bottom
        if (top <= bottom) {
            for (i = right_; i >= left_; i--) {
                spiral[bottom][i] = arr[idx];
                idx++;
            }
            bottom--;
        }

        // 4) Nếu còn hợp lệ, đi từ hàng bottom -> top trên cột left_
        if (left_ <= right_) {
            for (i = bottom; i >= top; i--) {
                spiral[i][left_] = arr[idx];
                idx++;
            }
            left_++;
        }
    }

    // In ra kết quả
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            cout << spiral[i][j];
            if (j < n) cout << " ";
        }
        cout << "\n";
    }

}
