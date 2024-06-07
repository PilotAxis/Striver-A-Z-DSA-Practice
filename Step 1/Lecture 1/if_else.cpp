#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int age;
    cin >> age;

    if (age >= 18) {
        cout << "You can vote for elections!" << endl;
    } else if (age < 18 && age >= 0) {
        cout << "You can't vote in elections" << endl;
    } else {
        cout << "Give correct input!" << endl;
    }
    return 0;
}