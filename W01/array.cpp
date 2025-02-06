/*
Programmer: Eric Araujo
Description: Lecture about arrays and tests done in class on 01/31.
*/

#include <iostream>
using namespace std;

int triple(int x = 1);

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Fixed array initialization
    // cout << arr[6] << endl; // Commented out to avoid out-of-bounds access
    cout << "Array address: " << arr << endl;
    cout << "Second element: " << arr[1] << endl;
    cout << "Address of second element: " << &arr[1] << endl;
    cout << "Size of array: " << sizeof(arr) << endl;
    cout << "Size of array element: " << sizeof(arr[1]) << endl;
    cout << "Size of address of array element: " << sizeof(&arr[1]) << endl;

    cout << "Triple of default value: " << triple() << endl;
    cout << "Triple of 5: " << triple(5) << endl; // Added another test for triple function
}

int triple(int x){
    return 3*x;
}