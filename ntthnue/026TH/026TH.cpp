#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
unordered_map<ll, ll> viTriSoDu;
ll tuSo, mauSo, doDaiKhongLap, doDaiLap;

void read() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("026TH.INP", "r", stdin);
    freopen("026TH.OUT", "w", stdout);
}

void timChuKy() {
//	Khi chia a cho b, nếu phép chia không hết, ta tiếp tục chia phần dư với b. 
//	Quá trình này có hai khả năng:
//	1. Phần dư trở về 0 số thập phân hữu hạn (không có phần tuần hoàn).
//	2. Phần dư lặp lại bắt đầu xuất hiện chu kỳ lặp lại.
    viTriSoDu.clear();
    ll soDu = tuSo % mauSo, chiSo = 0;
    doDaiKhongLap = doDaiLap = 0;
    while (soDu && !viTriSoDu.count(soDu)) {
        viTriSoDu[soDu] = chiSo++; // Luu vi tri cua so du de tim chu ky
        soDu = (soDu * 10) % mauSo; // Tinh so du moi sau khi nhan 10
    }
    if (soDu) {
        doDaiLap = chiSo - viTriSoDu[soDu]; // Tinh do dai phan tuan hoan
        doDaiKhongLap = chiSo - doDaiLap; // Tinh do dai phan khong tuan hoan
    } 
	else {
		doDaiKhongLap = chiSo;
	}
}

int main() {
    read();
    cin >> tuSo >> mauSo;
    timChuKy();
    cout << doDaiKhongLap << " " << doDaiLap;
}
