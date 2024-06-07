#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    /*int number;
    cin >> number;
    int factorial = 1;
    while (number > 0) {
        factorial *= number;
        number--;
    }
    cout << factorial << endl;
    return 0;*/

    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int target;
    cin >> target;
    for (int num : numbers) {
        if (num == target) {
            break;
        }
        cout << "The number is " << num << endl;
    }
    for (int x : numbers) {
        if (x%2 == 0) {
            continue;
        }
        cout << "Odd number is " << x << endl;
    }
    return 0;
}