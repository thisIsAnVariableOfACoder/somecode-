#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll q,w,e,r,t,y;

int main() {
    cin >> q >> w >> e >> r >> t >> y;

    if (q==r && w==t && e==y) {
        cout << 1;
    }
    else if ((q<=r && w<=t && (q+e)>=(r+y) && (w+e)>=(t+y)) || (q>=r && w>=t && (q+e)<=(r+y) && (w+e)<=(t+y)))
		cout << 2;
	else if ((q+e)<=r || (w+e)<=t || (r+y)<=q || (t+y)<=w)
		cout << 4;
	else
		cout << 3;
}






