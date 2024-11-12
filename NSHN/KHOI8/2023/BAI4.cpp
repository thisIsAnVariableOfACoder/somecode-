#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,k;
string tmp;
string s;

bool inHoa(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool check(long long l, long long r) {
    long long m;

    for (m=l; m<=r; m++) {
        if (int(s[m])<=57) {
            return false;
        }
    }
    for(m=l;m<=r-1;m++) {
        if (inHoa(s[m]) == inHoa(s[m+1])) {
            return false;
        }
    }

    return true;
}

int main() {
    npk;

    ll i,j,res;
    cin >> n >> k >> s;
    s= ' ' + s;
    res= 0;
    for (i=1; i<=n; i++)
        for (j=i; j<=min(n,i+k-1); j++) {
            res= res + check(i, j);

            // for(ll q = i; q <= j; q++) {
            //     cout << s[q];
            // }
            // cout << " " << check(i,j) << "\n";
        } 
    cout << res;
}
