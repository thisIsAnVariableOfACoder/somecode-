#include <bits/stdc++.h>
using namespace std;

#define nguyenpk ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    nguyenpk;
    int k,i;
    string s,ans;
    ans = "";

    cin >> s >> k;

    for (i = 0; i < s.size(); i++) {
        while (k > 0 && ans.empty()==false && ans.back() < s[i]) {
            ans.pop_back();
            k = k - 1;
        }
        ans = ans + s[i];
    }
    while (k > 0) {
        ans.pop_back();
        k = k - 1;
    }

    cout << ans;
}
