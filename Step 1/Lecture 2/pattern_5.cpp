#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = n-1; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            cout << "*" << " ";
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