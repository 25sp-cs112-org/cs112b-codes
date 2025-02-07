#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream fin("input.txt"); // Open the file
    if (!fin) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    
    string s;
    while (true) {
        getline(fin, s);
        cout << s << endl;
        if (!fin) {
            break;
        }
    }
}