#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,sophieu=0,ans=300001,sum=0;
ll p[1005];
bool a[1005]; // day so backtrack
ll b[1005][1005]; // cai tien 3

void back(ll indx) {
    ll i,j,tmp;

    for(i = (sophieu==0); i <= 1; i++) {
        tmp = sophieu; // luu lai so phieu
        if (i==0) { // neu dung ve thi giam so ve
            sophieu--;
        }
        else {
            if (p[indx]>100) { // tang so ve len neu p[i] > 100
                sophieu++;
            }
            sum += p[indx]; // neu mua thi tang so tien
        }
        a[indx]=i;
        if (indx==n) { // sinh tu 1 den n
            ans = min(ans,sum); // lay min cua tat ca so tien
            // for(j = 1; j <= n; j++) {
            //     cout << a[j] << " ";
            // }
            // cout << sum << "\n";
        }
        else {
            if (sum<b[indx][sophieu]) {
                b[indx][sophieu] = sum;
                back(indx+1);
            }
        }
        // tra lai gia tri cho cac bien
        sum -= (p[indx])*(a[indx]);
        sophieu = tmp;
    }
}

int main() {
    npk;

    ll i,j;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for(i = 1; i <= n; i++) {
        for(j = 0; j <= n; j++) {
            b[i][j] = 300001;
        }
    }
    back(1);

    cout << ans;
}
