#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll K;

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

ll findNumberAtPosition() {
    string ans = "";
    ll i = 1;

    while (ans.length() < K) {
        ans += to_string(i);
        i++;
    }

    return ans[K - 1] - '0';
}

int main() {
    fastIO();

    cin >> K;

    cout << findNumberAtPosition();
}

