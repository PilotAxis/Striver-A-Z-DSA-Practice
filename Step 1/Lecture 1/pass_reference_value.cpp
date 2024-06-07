#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*void summ(int m, int n, int &a) { // & is the pass by reference parameter
    a = m + n;
    cout << a << endl;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // pass by value
    int m, n;
    int a = 0;
    cin >> m >> n;
    summ(m ,n, a);
    cout << a << endl;
    return 0;
}*/

// for an array, it takes by default pass by reference

void change(int arr[], int n) {
    arr[0] += 100;
    cout << arr[0] << endl;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n = 5;
    int arr[n];
    for (int i = 0; i <= 4; i++) {
        cin >> arr[i];
    }
    change(arr, n);
    cout << arr[0] << endl;
    return 0;
}