#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("CAU2HSGCAP2.INP","r",stdin);
	freopen("CAU2HSGCAP2.OUT","w",stdout);
}

ll k,m,x;

//ll modmul(ll a, ll b, ll mod) 
//{ 
//    ll res; // Initialize result 
//  
//    // Update a if it is more than 
//    // or equal to mod 
//    a %= mod; 
//  	res=0;
//    while (b) { 
//        // If b is odd, add a with result 
//        if (b & 1) 
//            res = (res + a) % mod; 
//  
//        // Here we assume that doing 2*a 
//        // doesn't cause overflow 
//        a = (2 * a) % mod; 
//  
//        b >>= 1; // b = b / 2 
//    } 
//  
//    return res; 
//} 

int main() {
	read();
	ll i,ans;
	cin >> k >> m >> x;
	
	ans=1;
//	for(i=1;i<=k;i++) {
//		ans = modmul(ans,x,m)%m;
//	}
	for(i=1;i<=k;i++) {
		ans = ((ans%m)*(x%m))%m;
	}
	
	cout << ans;
}




