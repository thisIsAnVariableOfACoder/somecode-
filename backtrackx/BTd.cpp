#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
ll a[105];

void back(ll pos, ll x) {
	ll i, j;

	for (i=1; i<=n-x; i++) {
		if (pos>=3) {
            if ((a[pos-2]>a[pos-1] && i>a[pos-1]) || (a[pos-2]<a[pos-1] && i<a[pos-1]))
                a[pos] = i;
            else
                continue;
        }
        else if (pos==2) {
            if (i!=a[pos-1]) 
                a[pos]= i;
            else 
                continue;
        }       
        else 
            a[pos]=i;
		if (x+i==n) {
			for (j=1; j<=pos; j++) {
				cout << a[j] << " ";
			}
			cout << "\n";
		}
		else
			back(pos+1, x+i);
	}
}

int main() {
	cin >> n;

	back(1, 0);
}