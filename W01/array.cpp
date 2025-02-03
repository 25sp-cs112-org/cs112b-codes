/*
Programmer: Eric Araujo
Description: Lecture about arrays and tests done in class on 01/31.
*/

#include <iostream>
using namespace std;


int triple(int x = 1);

int main() {
    int arr[5] = {1, 2, 3, 4};
    // cout << arr[6] << endl;
    cout << arr << endl;
    cout << arr[1] << endl;
    cout << &arr[1] << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[1]) << endl;
    cout << sizeof(&arr[1]) << endl;

    cout << triple() << endl;
}

int triple(int x){
    return 3*x;
}