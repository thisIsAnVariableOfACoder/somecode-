#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

string s;

int main() {
    npk;

    ll i,j,k,ans;
    bool checkk;
    cin >> s;

    ans = 0;
    for(i = 0; i < s.size(); i++) {
        for(j = i; j < s.size(); j++) {
            if (s[i]==s[j]) {
                checkk=true;
                for(k = 0; k <= (j-i+1)/2; k++) {
                    if (s[i+k]!=s[j-k]) {
                        checkk=false;
                    }
                }
                if (checkk) {
                    ans = max(ans,j-i+1);
                }
            }
        }
    }

    cout << ans;
}
