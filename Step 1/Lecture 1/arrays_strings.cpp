#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    /*int arr[5];
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++){
        cout << arr[j] << " ";
    }

    return 0;

    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    arr[1] = 112;
    cout << arr[0] << arr[1] << arr[2];*/
    string str = "PilotAxis";
    int len = str.size();
    str[len - 1] = 'q';
    cout << str[len - 1];
}