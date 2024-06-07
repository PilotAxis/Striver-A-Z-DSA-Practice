#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int m, n;
    m = 1;
    n = 1;
    int res = 0;
    int u = 0;
    cin >> u;
    if (u == 0) {
        res = 0;
    } else if (u == 1 || u == 2) {
        res = 1;
    } else {
        for (int i = 3; i <= u; i++) {
            res = n + m;
            n = m;
            m = res;
        }
    }
    cout << res << endl;
    return 0;
}