#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string X;
ll k;

void read() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("033SLN.INP", "r", stdin);
    freopen("033SLN.OUT", "w", stdout);
    
    cin >> X >> k;
}

void solve() {
    ll n, need, removed, idx;
    string st;
    n = X.size();
    need = n - k;
    removed = 0;
    for (char c : X) {
        while (!st.empty() && removed < k && st.back() < c) {
            st.pop_back();
            removed++;
        }
        st.push_back(c);
    }
    while (removed < k) {
        st.pop_back();
        removed++;
    }
    st.resize(need);
    idx=0;
    while (idx < st.size() && st[idx] == '0') idx++;
    cout << (idx == st.size() ? "0" : st.substr(idx)) << "\n";
}

int main() {
    read();
    solve();
}
