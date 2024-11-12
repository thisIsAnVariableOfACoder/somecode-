#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

struct inp {
    ll p,k;
} a[10005];
ll n,ans=0;
ll b[10005];

bool cmp(inp x, inp y) {
    return (x.k < y.k);
}

void back(ll indx) {
    ll i,j,temp,nearest;
    bool check;

    for(i = 0; i <= 1; i++) {
        b[indx]=i;
        if (indx==n) {
            check=true;
            nearest=0;
            for(j = 1; j <= n; j++) {
                if (b[j]) {
                    if ((a[nearest].k)>(a[j].p)) {
                        check=false;
                        break;
                    }
                    nearest=j;
                }
            }
            if (check) {
                temp=0;
                for(j = 1; j <= n; j++) {
                    temp += (a[j].k - a[j].p)*(b[j]);

                    // cout << b[j] << " ";
                }
                // cout << temp << "\n";
                ans = max(ans,temp);
            }
        }
        else {
            back(indx+1);
        }
    }
}

int main() {
    npk;

    ll i;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i].p >> a[i].k;
    }

    sort(a+1,a+n+1,cmp);
    back(1);

    cout << ans;
}


