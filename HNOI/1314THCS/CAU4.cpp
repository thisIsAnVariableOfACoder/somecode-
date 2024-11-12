#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,chenhlech,ans=ll(1e10);
ll a[1005];
ll inp[1005];
bool checkk[1005];

void fastio() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void back(ll indx) {
    ll i,j;

    if (indx!=k) {
        for(i = 1; i <= n; i++) {
            if (checkk[i]==false) {
                a[indx] = i;
                checkk[i]=true;

                if(indx==n) {
                    chenhlech=0;
                    for(j = 1; j < n; j++) {
                        chenhlech += abs(inp[a[j]]-inp[a[j+1]]);
                    }
                    
                    ans = min(ans,chenhlech);
                }
                else 
                    back(indx+1);
                
                checkk[i] = false;
            }
        }
    }
    else 
        back(indx+1);
}

int main() {
    ll i;
    cin >> n >> k;
    for(i = 1; i <= n; i++) {
        cin >> inp[i];
    }

    for(i =1; i <= n; i++) {
        checkk[i]=false;
    }
    checkk[k]=true;
    a[k] = k;
    back(1);

    cout << ans;
}
