//"Never be ashamed of where you are when you start. Skyscrapers are built from the ground up."
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = long double;
using str = string;
using pii = pair<ll, ll>;
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define nl cout << '\n';
#define pi acos(-1.0)
#define task ""

/** Optimization **/
void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	if (fopen(task".INP", "r")){
		freopen(task".INP", "r", stdin);
		freopen(task".OUT", "w", stdout);
	}
}

/** Variables **/
ll n;
vector<string> v;

/** Functions **/
bool cmp(string x, string y){
	return (x+y) > (y+x);
}

/** Main code **/
void RPMCPP(){
	ll i;
	cin >> n;
	while (n % 2 == 0){
		v.pb("2");
		n /= 2;
	}
	for (i = 3; i*i <= n; i += 2){
		while (n % i == 0){
			v.pb(to_string(i));
			n /= i;
		}
	}
	if (n > 1){
		v.pb(to_string(n));
	}
	sort(all(v), cmp);
	for (auto &x : v){
		cout << x;
	}
}

signed main(){
	fastIO();
	RPMCPP();
}
