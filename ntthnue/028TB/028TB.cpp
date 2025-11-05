#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("028TB.INP","r",stdin);
	freopen("028TB.OUT","w",stdout);
}

int main() {
	read();
	cin >> n;
	
	cout << ceil((-1 + sqrt(1 + 8*n)) / 2);
	
//	Các bước tối ưu hóa bài toán thả bóng (dùng dãy số tam giác)
// TRIANGULAR SEQUENCE

//  Xác định cách thử tối ưu:
//  Nếu có 1 quả bóng, thử từng tầng từ 1 đến N, tốn tối đa N lần.
//  Nếu có 2 quả bóng, dùng dãy số tam giác để giảm số lần thử.

//  Thử bóng đầu tiên theo dãy tam giác:
//  Thả bóng tại các tầng theo quy luật T_k = k(k+1)/2.
//  Khi bóng vỡ, biết X nằm trong khoảng từ tầng trước đó đến tầng hiện tại.

//  Dùng bóng thứ hai để xác định chính xác:
//  Bắt đầu từ tầng ngay dưới tầng bóng bị vỡ.
//  Thử từng tầng một cho đến khi tìm thấy X.

//  Tìm số lần thử tối thiểu:
//  Tìm k nhỏ nhất thỏa mãn k(k+1)/2 ≥ N.
//  Lưu ý: k*(k+1)/2 là số thứ k của dãy số tam giác
//  Giải bất phương trình: k = ceil((-1 + sqrt(1 + 8N)) / 2).
// Đây là công thức tính số bậc của số tam giác (triangular number)
//  Đây là số lần thử tối thiểu trong trường hợp xấu nhất.
//  Kết quả: Phương pháp này giúp giảm số lần thử từ O(N) xuống O(sqrt(N)), tối ưu hơn rất nhiều.
}
