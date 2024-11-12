#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ngay,thang,nam;
ll check[13] = {0,31,30,31,30,31,30,31,31,30,31,30,31};
ll monthCode[13] = {0,1,4,4,0,2,5,0,3,6,1,4,6};

bool isLeap() {
    if (nam%100==0) {
        if (nam%400==0)
            return true;
    }
    else {
        if (nam%4==0) {
            return true;
        }
    }
    return false;
}

void read() {
    freopen("022THU.INP","r",stdin);
    freopen("022THU.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    ll year2lastdigi,ans;
    cin >> ngay >> thang >> nam;

    if (thang < 1 || ngay < 1 || ngay > check[thang] || (ngay > 28 && thang==2 && isLeap()==false)) {
        cout << -1;
    }
    else {
        year2lastdigi = nam - (ll(nam/100)*100);
        year2lastdigi += year2lastdigi/4;
        ans = year2lastdigi + ngay;
        if (thang==1 && isLeap()) {
        	ans += monthCode[thang];
		}
		else if (thang==2 && isLeap()) {
			ans += 3;
		}
		else {
			ans += monthCode[thang];
		}
		
		cout << (ans+5)%7;
    }
}



