#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    int i,num;
    set<int> se;
    cin >> s;

    t = "";
    num = 0;
    for(i = 0; i <= s.size(); i++) {
        if ((int(s[i])-48)>=0 && (int(s[i])-48)<=9)
            t = t + s[i];
        else if (t.empty()==false) {
            num = stoi(t);
            se.insert(num);
            t = "";
        }
    }

    cout << se.size();
}
