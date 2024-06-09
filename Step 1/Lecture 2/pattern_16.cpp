#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A'+i;
        for (int j = 0; j <= i; j++) {
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