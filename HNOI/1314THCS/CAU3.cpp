#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
set<char> sett;

bool isDoiXung(ll a, ll b) {
    ll i,sizee;
    sizee = (b-a)/2;
    for(i = 0; i <= sizee; i++) {
        if (s[a+i]!=s[b-i]) {
            return false;
            break;
        }
    }
    return true;
}

void distanceChars() {
    ll i;
    for(i = 0; i < s.size(); i++) {
        sett.insert(s[i]);
    }

    cout << sett.size() << "\n";
}

void doiXung() {
    ll i,j,ans;
    ans = 1;
    for(i = 0; i < s.size()-1; i++) {
        for(j = i+1; j < s.size(); j++) {
            if (isDoiXung(i,j)) {
                ans = max(ans,j-i+1);
            }
        }
    }

    cout << ans;
}

int main() {
    cin >> s;

    distanceChars();
    doiXung();
}
