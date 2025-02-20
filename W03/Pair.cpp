
#include "Pair.h"

// default constructor implementation
Pair::Pair(){
    myFirst = Item();
    mySecond = Item();
}

// explicit-value constructor implementation
Pair::Pair(Item first, Item second){
    myFirst = first;
    mySecond = second;
}

// getters

Item Pair::getFirst() const{
    return myFirst;
}

Item Pair::getSecond() const{
    return mySecond;
}


void Pair::setFirst(Item first){
    myFirst = first;
}

void Pair::setSecond(Item second){
    mySecond = second;
}

string Pair::toString() const{
    return  "Pair: <" + to_string(myFirst)
     + ", " + to_string(mySecond) + ">";
}

ostream &operator<<(ostream &out, 
    const Pair &p) {
    out << p.toString();
    return out;
}


Pair &Pair::operator+(Pair &p1){
    Pair result;
    result.myFirst = p1.myFirst + myFirst;
    result.mySecond = p1.mySecond + mySecond;
    // result.setFirst(p1.getFirst() + myFirst);
    // result.setSecond(p1.getSecond() + mySecond);
    return result;
}
