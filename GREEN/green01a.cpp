#include <bits/stdc++.h>
using namespace std;

int main() {
    string m;
    int d;
    cin >> m >> d;

    if (m=="Mar") {
        if (d>=21) cout << "Aries";
        else cout << "Pisces";
    }
    else if (m=="Apr") {
        if (d>=21) cout << "Taurus";
        else cout << "Aries";
    }
    else if (m=="May") {
        if (d>=21) cout << "Gemini";
        else cout << "Taurus";
    }
    else if (m=="Jun") {
        if (d>=22) cout << "Cancer";
        else cout << "Gemini";
    }
    else if (m=="Jul") {
        if (d>=23) cout << "Leo";
        else cout << "Cancer";
    }
    else if (m=="Aug") {
        if (d>=23) cout << "Virgo";
        else cout << "Leo";
    }
    else if (m=="Sep") {
        if (d>=22) cout << "Libra";
        else cout << "Virgo";
    }
    else if (m=="Oct") {
        if (d>=23) cout << "Scorpio";
        else cout << "Libra";
    }
    else if (m=="Nov") {
        if (d>=23) cout << "Sagittarius";
        else cout << "Scorpio";
    }
    else if (m=="Dec") {
        if (d>=22) cout << "Capricorn";
        else cout << "Sagittarius";
    }
    else if (m=="Jan") {
        if (d>=21) cout << "Aquarius";
        else cout << "Capricorn";
    }
    else {
        if (d>=20) cout << "Pisces";
        else cout << "Aquarius";
    }
}