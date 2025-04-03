#include "List.h"
#include <iostream>

using namespace std;

int main(){
    List list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.print(); // Output: 1 2 3
    list.print2(); // Output: 1 2 3

    // cout << "Size: " << list.size() << endl; // Output: Size: 3

    // list.remove(2);
    // list.print(); // Output: 1 3

    // cout << "Contains 2: " << (list.contains(2) ? "Yes" : "No") << endl; // Output: No
    // cout << "Contains 3: " << (list.contains(3) ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}