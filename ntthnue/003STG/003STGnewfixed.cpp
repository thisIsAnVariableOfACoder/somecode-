#include <bits/stdc++.h>
using namespace std;

struct coor {
	double x;
	double y;
};

coor a,b,c;

void read() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("003STG.INP","r",stdin);
	freopen("003STG.OUT","w",stdout);
}

int main() {
	read();
	double AB,AC,BC,p;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	
	if ((((a.x==b.x) + (b.x==c.x) + (a.x==c.x)))<3 && ((a.y==b.y) + (b.y==c.y) + (a.y==c.y))<3) {
		AB = sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
		AC = sqrt((c.x-a.x)*(c.x-a.x) + (c.y-a.y)*(c.y-a.y));
		BC = sqrt((b.x-c.x)*(b.x-c.x) + (b.y-c.y)*(b.y-c.y));
		p = (AB+AC+BC)/2;
		
		cout << fixed << setprecision(3) << AB+AC+BC << " " << sqrt(p*(p-AB)*(p-AC)*(p-BC));
	}
	else {
		cout << "K";
	}
}




