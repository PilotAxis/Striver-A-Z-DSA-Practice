#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int space = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    int spaces = 2*n-2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }

    return 0;
}