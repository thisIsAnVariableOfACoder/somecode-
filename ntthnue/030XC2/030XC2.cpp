#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<string> words;

void read() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("030XC2.INP", "r", stdin);
    freopen("030XC2.OUT", "w", stdout);
}

int main() {
    read();
	string s, word;
	bool isNewWord;
    getline(cin, s);

    word = "";
    isNewWord = true;
    for (size_t i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (isNewWord) word += toupper(s[i]); // Vi?t hoa ch? d?u
            else word += tolower(s[i]);
            isNewWord = false;
        } else if (s[i] == ' ') {
            if (!word.empty()) {
                words.push_back(word);
            }
            word = "";
            isNewWord = true;
        }
    }
    if (!word.empty()) words.push_back(word);

    sort(words.begin(), words.end());

    for (size_t i = 0; i < words.size(); i++) {
        cout << words[i];
        if (i < words.size() - 1) cout << "\n";
    }
}
