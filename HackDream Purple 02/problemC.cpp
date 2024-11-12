#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

ll t;
string s;
string arr[8] = {"","ABC","ACB","BAC","BCA","CAB","CBA", ""};
ll a[8];
bool checkk[8];
bool endd;

void back(ll indx) {
    ll i;
    size_t found;

    if (indx==7) {
        found = -3;
        for(i = 1; i <= 6; i++) {
            found = s.find(arr[a[i]],found+3);
            
            // cout << found << " ";
            
            if (found == string::npos) {
                break;
            }
        }
        // cout << "\n";

        endd = (i > 6);
    }
    for(i = 1; i <= 6; i++) {
        if (checkk[i]==false) {
            a[indx]=i;
            checkk[i]=true;
            back(indx+1);
            if (endd) {
                return;
            }
            checkk[i]=false;
        }
    }
}

int main() {
    npk;

    ll i;
    cin >> t;
    while(t--) {
        cin >> s;

        for(i = 1; i <= 6; i++) {
            checkk[i]=false;
        }
        endd = false;
        back(1);

        if (endd) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << "\n";
    }
}






