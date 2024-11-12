#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

long long int n;
string a[200];

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

string add2Num(string a, string b) {
    ll i,temp1,temp2,add;
    string ans,tmp;
    ans = "";
    add = 0;
    if (a.size()>b.size())
    	swap(a,b);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(i = 0; i < a.size(); i++) {
        temp1 = a[i] - '0';
        temp2 = b[i] - '0';
        tmp = to_string((temp1+temp2+add)%10);
        ans += tmp;
        add = ((temp1+temp2+add)>=10);
    }
    for(i = a.size(); i < b.size(); i++) {
        temp1 = b[i] - '0';
        tmp = to_string((temp1+add)%10);
        ans += tmp;
        add = ((temp1+add)>=10);
    }
    if (add) 
    	ans += (add+'0');
    reverse(ans.begin(),ans.end());

    return ans;
}

int main() {
    fastIO();

    ll i;
    cin >> n;

    if (n<=3)
        cout << 1;
    else {
        a[1] = "1";
        a[2] = "1";
        a[3] = "1";

        for(i = 4; i <= n; i++) {
            a[i] = add2Num(a[i-1],a[i-3]);
        }

        cout << a[n];
    }
}





