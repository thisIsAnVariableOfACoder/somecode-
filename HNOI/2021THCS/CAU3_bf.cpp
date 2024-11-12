#include <bits/stdc++.h>

#define X first
#define Y second
#define int long long

const int N = 5e3 + 5;
const int K = 1e3 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18 + 7;

#define pii pair<int, int> 
#define all(v) (v).begin(), (v).end()

using namespace std;

int m, n, maxx;
char a[N][N];
string s[N];

signed main (){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
    //if(fopen(name".inp","r")){
	//	freopen(name".inp","r",stdin);
	//	freopen(name".out","w",stdout);
	//}
	
	cin >> n >> m;
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j)
			cin >> a[i][j];
	for(int i = 1 ; i <= m ; ++i)
		for(int j = n ; j >= 1 ; --j)		
			s[i] += a[j][i];
	sort(s + 1, s + m + 1);
	for(int i = 1 ; i < m ; ++i)
	{
		string x = s[i];
		string y = s[i + 1];
		int id = 0;
		while(x[id] == y[id] && id < n - 1)
			id++;
		maxx = max(maxx, id);
	}
	cout << n - maxx - 1;
	
	
	return 0;
}
