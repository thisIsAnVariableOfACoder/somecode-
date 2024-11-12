#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string t;

bool prime[100010];

void sangNT() {
    ll i,j;
    memset(prime, true, sizeof(prime));

    for (i = 2; (i * i) <= 100005; i++) {
        if (prime[i] == true) {
            for (j = i * i; j <= 100005; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    ll i,j,tmp,ans;
    string a;
    cin >> t;

    sangNT();
    ans = -1;
    tmp = 0;
    for(i = 0; i < t.size(); i++) {
        if ((int(t[i])-48)>=1 && (int(t[i])-48)<=9) {
            j = i;
            a="";
            while((int(t[j])-48)>=0 && (int(t[j])-48)<=9) {
                a = a + t[j];
                tmp = stoi(a);
                if (tmp>1e5) {
                    break;
                }
                else if (prime[tmp]) {
                    ans = max(ans,tmp);
                }
                j++;
            }
        }
    }

    cout << ans;
}
