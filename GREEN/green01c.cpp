#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,m,ch,ca,add,maxx,countt;
    string a;
    cin >> n;
    m = 0;
    ch = 0;
    ca = 0;
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a;
            if (a=="1") add = 25;
            else if (a=="2") add = 18;
            else if (a=="3") add = 15;
            else if (a=="4") add = 12;
            else if (a=="5") add = 10;
            else if (a=="6") add = 8;
            else if (a=="7") add = 6;
            else if (a=="8" || a=="9" || a=="10") add = 2;
            else if (a=="DNF") add = 0;
            else add = 1;

            if (i==1) m = m + add;
            else if (i==2) ch = ch + add;
            else ca = ca + add; 
        }
    }

    cout << m << endl;
    cout << ch << endl;
    cout << ca << endl;
    
    countt = 0;
    maxx = max(m,ch);
    maxx = max(maxx,ca);
    if (maxx==m) countt++;
    if (maxx==ch) countt++;
    if (maxx==ca) countt++;

    if (countt>=2) cout << "No race winner";
    else if (maxx==m) cout << "Super Max";
    else if (maxx==ch) cout << "Lord Perceval";
    else if (maxx==ca) cout << "Smooth Operator";
}
