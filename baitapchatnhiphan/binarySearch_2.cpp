#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[100005];

int bs1(int x) {
    int l, r, mid;

    l= 1; r= n;
    while (l <= r) {
        mid= (l+r)/2;
        if (a[mid] < x)
            l= mid+1;
        else
            r= mid-1;
    }

    return r;
}

int bs2(int x) {
    int l, r, mid;

    l= 1; r= n;
    while (l <= r) {
        mid= (l+r)/2;
        if (a[mid] < x)
            l= mid+1;
        else
            r= mid-1;
    }

    return l;
}

int bs3(int x) {
    int l, r, mid;

    l= 1; r= n;
    while (l <= r) {
        mid= (l+r)/2;
        if (a[mid] <= x)
            l= mid+1;
        else
            r= mid-1;
    }

    return r;
}

int bs4(int x) {
    int l, r, mid;

    l= 1; r= n;
    while (l <= r) {
        mid= (l+r)/2;
        if (a[mid] <= x)
            l= mid+1;
        else
            r= mid-1;
    }

    return l;
}

int main() {
    int i;

    cin >> n >> k;
    for (i=1; i<=n; i++)
        cin >> a[i];

    cout << bs1(k) << "\n" << bs2(k) << "\n" << bs3(k) << "\n" << bs4(k);
}
