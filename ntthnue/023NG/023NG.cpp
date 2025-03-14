#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// So ngay trong thang cua nam khong nhuan
ll days[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
ll pre[15];

void read() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("023NG.INP", "r", stdin);
    freopen("023NG.OUT", "w", stdout);
}

// Ham kiem tra nam nhuan
bool nhuan(ll ye) {
    return ((ye % 400 == 0) || ((ye % 4 == 0) && (ye % 100 != 0)));
}

// Ham kiem tra ngay hop le
bool isValidDate(ll d, ll m, ll y) {
    if (y < 1 || y > 10000 || m < 1 || m > 12 || d < 1)
        return false;

    ll maxDay = days[m];
    if (m == 2 && nhuan(y)) maxDay = 29;

    return d <= maxDay;
}

// Ham tinh so ngay tu 01/01/0001 den ngay (ng, th, na)
ll daysFromStart(ll ng, ll th, ll na) {
    ll tongNgay = ng;

    // Cong so ngay cua cac thang truoc do trong nam hien tai
    for (ll i = 1; i < th; i++) {
        tongNgay += days[i];
        if (i == 2 && nhuan(na)) tongNgay++; // Them 1 ngay neu thang 2 cua nam nhuan
    }

    // Cong so ngay cua cac nam truoc do
    tongNgay += (na - 1) * 365 + (na - 1) / 4 - (na - 1) / 100 + (na - 1) / 400;

    return tongNgay;
}

int main() {
    read();
    ll d1, m1, ye1, d2, m2, ye2;
    cin >> d1 >> m1 >> ye1 >> d2 >> m2 >> ye2;

    // Kiem tra tinh hop le cua ca hai ngay
    if (!isValidDate(d1, m1, ye1) || !isValidDate(d2, m2, ye2)) {
        cout << -1;
    } else {
        // Tinh so ngay giua hai ngay
        ll ngay1 = daysFromStart(d1, m1, ye1);
        ll ngay2 = daysFromStart(d2, m2, ye2);
        cout << abs(ngay1 - ngay2);
    }
}
