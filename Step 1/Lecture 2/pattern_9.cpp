#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern_up(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= n-i-1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2*i - 1; j++) {
            cout << "*";
        }
        for (int j = 0; j <= n-i-1; j++) {
            cout <<  " ";
        }
        cout << endl;
    }
}

void pattern_down(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2*n-(2*i+1); j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
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
    pattern_up(n);
    pattern_down(n);
    return 0;
}