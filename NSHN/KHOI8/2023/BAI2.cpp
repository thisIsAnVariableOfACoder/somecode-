#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,p,q;
ll a[100005];

int main() {
    npk;

    ll i,pos1,pos2;
    string s,ss;
    cin >> n >> p >> q;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a+1,a+n+1);
    s = "A";
    ss= "B";
    for(i = 1; i < n/2; i++) {
        if (s[i-1]=='A') {
            s += "B";
            ss += "A";
        }
        else {
            s += "A";
            ss += "B";
        }
    }

    // cout << i << "\n";
    reverse(ss.begin(), ss.end());
    if (n%2) 
        s= s + 'A' + ss;
    else
        s= s + ss;
    pos1 = -1;
    pos2 = -1;
    for(i = 1; i <= n; i++) {
        if (a[i]==p) {
            pos1 = i;
        }
        if (a[i]==q) {
            pos2 = i;
        }
        if (pos1 > 0 && pos2 > 0) {
            break;
        }
    }

    // for(i = 1; i <= n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << "\n";
    cout << s << "\n";

    if (s[pos1-1]=='A') {
        cout << "Andy";
    }
    else {
        cout << "Bob";
    }
    cout << "\n";
    if (s[pos2-1]=='A') {
        cout << "Andy";
    }
    else {
        cout << "Bob";
    }
}
