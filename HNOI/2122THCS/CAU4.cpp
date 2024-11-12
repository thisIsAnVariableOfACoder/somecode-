#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fi first
#define se second

ll n,m,k,d,c;
// ll a[10005][10005];
pair<ll,ll> arr[1005];
ll dist[1005];
ll temp[1005];

int main() {
    ll i,j,ans,minn;
    cin >> n >> m >> k;
    // memset(a,0,sizeof(a));
    for(i = 1; i <= k; i++) {
        cin >> d >> c;

        if (d<=n && c<=m)
            arr[i] = make_pair(d,c);
    }

    sort(arr+1,arr+n+1);
    memset(dist,0,sizeof(dist));
    for(i = 1; i <= k; i++) {
        for(j = 1; j <= k; j++) {
            if (arr[i].fi==arr[j].fi) {
                dist[j] = arr[j].se-arr[i].se;
            }
            else {
                if ((arr[j].se)<(arr[i].se))
                    dist[j] = ll(sqrt((arr[j].fi-arr[i].fi+1)*(arr[j].fi-arr[i].fi+1) + (arr[i].se-arr[j].fi+1)*(arr[i].se-arr[j].se+1))) - 1;
                else 
                    dist[j] = ll(sqrt((arr[j].se-arr[i].se+1)*(arr[j].se-arr[i].se+1) + (arr[j].fi-arr[i].fi+1)*(arr[j].fi-arr[i].fi+1))) - 1;
            }
        }
        minn = dist[1];
        for(j = 2; j <= k; j++) {
            minn = min(minn,dist[j]);
        }
        temp[i] = minn;
    }
    ans = -1;
    for(i = 1; i <= k; i++) {
        ans = max(ans,temp[i]);
    }

    cout << ans;
}
