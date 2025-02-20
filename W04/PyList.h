
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

    private:
        Item *myArray;
        unsigned mySize;
        unsigned myCapacity;
};