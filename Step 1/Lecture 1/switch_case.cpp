/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int day;
    cin >> day;

    switch(day) {
        case 1 :
            cout << "Monday";
            break;
        case 2 :
            cout << "Tuesday";
            break;
        case 3 :
            cout << "Wednesday";
            break;
        case 4 :
            cout << "Thursday";
            break;
        case 5 :
            cout << "Friday";
            break;
        case 6 :
            cout << "Saturday";
            break;
        case 7 :
            cout << "Sunday";
            break;
        default :
            cout << "Invalid day";
            break;
    }
    return 0;
}*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x = 3;
    int y = 2;

    switch (x) {
        case 3 :
        cout << "Value of x is :" << " " << x << endl;
        switch (y) {
            case 2 :
                cout << "Value of y is :" << " " << y << endl;
                break;
            default :
                cout << "Invalid value of y";
                break;
        }
        break;
        default :
            cout << "Invalid value of x";
            break;
    }
    return 0;
}