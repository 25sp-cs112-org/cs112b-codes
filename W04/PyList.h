#include <iostream>

using namespace std;

typedef int Item;

class PyList{
    public:
        PyList();
        PyList(unsigned size);
        PyList(PyList & other);
        ~PyList();

        // append
        void append(Item it);

        // getters
        unsigned getSize() const;
        Item getItem(unsigned index) const;

        // setters
        void setItem(unsigned index, Item it);

        Item operator[](unsigned index) const;

        void removeAt(unsigned index);

        void testFraol(unsigned index){
            cout << myArray << endl;
            cout << *(&myArray) << endl;
            cout << *(&myArray[0]) << endl;

        }

    private:
        Item *myArray;
        unsigned mySize;     // the size of the List
        unsigned myCapacity; // the size of the array
};

ostream &operator<<(ostream &out, PyList p);