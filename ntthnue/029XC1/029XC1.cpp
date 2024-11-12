#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;

void read() {
    freopen("029XC1.INP","r",stdin);
    freopen("029XC1.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    ll i;
    string ans;
    getline(cin,s);

    ans = "";
    for(i = 0; i < s.size(); i++) {
        if (((s[i]-'a')>=0 && (s[i]-'a')<=25) || (((s[i]-'A')>=0) && ((s[i]-'A')<=25))) {
            if (ans.empty()==false) {
                if (ans[ans.size()-1]!=' ')
                    ans += tolower(s[i]);
                else
                    ans += toupper(s[i]);
            }
            else
                ans += toupper(s[i]);
        }
        else if (s[i]==' ' && ans.size()>0) {
            if (ans[ans.size()-1]!=' ') {
                ans += s[i];
            }
        }
    }
    if (ans[ans.size()-1]==' ') {
        ans.erase(ans.size()-1);
    }

    cout << ans;
}
