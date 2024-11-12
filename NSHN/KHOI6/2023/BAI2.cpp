#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

string s;

int main() {
    npk;

    long long i;
    string ans;
    cin >> s;
    
    s[0] = tolower(s[0]);
    ans = s[0];
    for(i = 1; i < (s.size()); i++) {
        s[i] = tolower(s[i]);
        if (i>0) {
            if (s[i]!=s[i-1]) {
                ans += s[i];
            }
        }
    }

    cout << ans;
}
