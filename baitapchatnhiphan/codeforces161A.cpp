#include <bits/stdc++.h>
using namespace std;
#define siz 100005
typedef long long ll;

ll a[siz],arr[siz];
vector<pair<ll,ll>> rangee;

void mang(ll n, ll x, ll y) {
    ll i;
    for(i = 1; i <= n; i++) {
        rangee.push_back(make_pair(a[i]-x,a[i]+y));
    }
}

ll bs(ll x, ll n, ll poss) { // max <=
    ll l,r,chat;
    l = poss;
    r = n;
    while(l<=r) {
        chat=(l+r)/2;
        if (((rangee[chat].first)<=x))
            r = chat - 1;
        else if ((rangee[chat].second)<=x)
            l = chat + 1;
        else
        	r = chat - 1;
    }

    return l;
}

int main() {
    ll n,m,x,y,i,b,pos;
    cin >> n >> m >> x >> y;
    for(i  = 1; i <= n; i++)
        cin >> a[i];
    rangee.clear();
    mang(n,x,y);
    i = 1;
    pos = -1;
    while(i<=n && pos<=n && pos>=1) {
        cin >> b;

		pos = bs(b,n,pos+1);
        arr[i] = pos;
        cout << pos << " ";
        i++;
    }
    // for(i = 1; i <= n; i++)
    	// cout << arr[i] << " ";
}
