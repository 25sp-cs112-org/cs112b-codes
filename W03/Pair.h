#ifndef _PAIR_H_
#include <string>
using namespace std;

typedef int Item;

class Pair{
    public:
        // default constructor
        Pair();
        // explicit-value constructor
        Pair(Item first, Item second);

        // getters
        Item getFirst() const;
        Item getSecond() const;

        // setters
        void setFirst(Item first);
        void setSecond(Item second);

        // toString
        string toString() const;


    private:
        Item myFirst;
        Item mySecond;

};

#endif
