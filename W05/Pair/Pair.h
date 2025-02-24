#ifndef _PAIR_H_
#include <string>
#include <sstream>

using namespace std;


template<class Item>
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
        
        Pair &operator+(Pair &p1);
        
        
        private:
        Item myFirst;
        Item mySecond;
        
    };


// default constructor implementation
template<class Item>
Pair<Item>::Pair(){
    myFirst = Item();
    mySecond = Item();
}

// explicit-value constructor implementation
template<class Item>
Pair<Item>::Pair(Item first, Item second){
    myFirst = first;
    mySecond = second;
}

// getters
template<class Item>
Item Pair<Item>::getFirst() const{
    return myFirst;
}

template<class Item>
Item Pair<Item>::getSecond() const{
    return mySecond;
}

template<class Item>
void Pair<Item>::setFirst(Item first){
    myFirst = first;
}

template<class Item>
void Pair<Item>::setSecond(Item second){
    mySecond = second;
}

template<class Item>
string Pair<Item>::toString() const{
    ostringstream oss;
    oss << "Pair: <" << myFirst << ", " << mySecond << ">";
    return  oss.str();
}

template<class Item>
ostream &operator<<(ostream &out, 
    const Pair<Item> &p) {
    out << p.toString();
    return out;
}

template<class Item>
Pair<Item> &Pair<Item>::operator+(Pair<Item> &p1){
    Pair<Item> result;
    result.myFirst = p1.myFirst + myFirst;
    result.mySecond = p1.mySecond + mySecond;
    // result.setFirst(p1.getFirst() + myFirst);
    // result.setSecond(p1.getSecond() + mySecond);
    return result;
}

    

#endif
