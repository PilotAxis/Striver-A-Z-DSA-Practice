#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = ('A'+(n-1)-i); ch <= 'A'+(n-1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    pattern(n);
    return 0;
}