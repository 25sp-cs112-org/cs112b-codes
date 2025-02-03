#include <iostream>

using namespace std;

unsigned factorial(unsigned number) {
    unsigned result = 1;
    for (unsigned i = 2; i <= number; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int i = 0;
    cout << "Initial value of i: " << i << endl;
    cout << "Pre-increment of i: " << ++i << endl;
    cout << "Post-increment of i: " << i++ << endl;
    cout << "End value of i: " << i << endl;

    int *x = &i;
    cout << "Memory address of i: " << x << endl;
    cout << "Value of i using pointer: " << *x << endl;
    return 0;
}