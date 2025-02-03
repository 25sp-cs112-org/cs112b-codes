/*
Programmer: Eric Araujo
Description: Lecture on 02/03 - Showing the scope of functions prototypes.
*/

#include <iostream>
using namespace std;

int triple(int x = 1);

int main() {
    cout << triple() << endl;
}

int triple(int x){
    return 3*x;
}