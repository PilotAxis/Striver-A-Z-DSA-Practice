// Pass by reference
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// void -> non - return
// int -> return
// parametrised
// non-parametrised

/*int add(int a, int b) {
    int num = a + b;
    return num;
}*/
void max_element(int m, int n) {
    if (m > n) {
        cout << m << endl;
    } else if (m == n) {
        cout << m << " " << n << endl;
    } else {
        cout << n << endl;
    }
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    /*int m, n;
    cin >> m >> n;
    int summ = add(m, n);
    cout << summ << endl;*/
    int m, n;
    cin >> m >> n;
    max_element(m, n);
    return 0;
}