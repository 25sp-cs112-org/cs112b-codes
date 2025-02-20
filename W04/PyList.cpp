#include "PyList.h"


// default constructor
PyList::PyList(){
    myArray = nullptr;
    myCapacity = 0;
    mySize = 0;
}


// explicit-value constructor
PyList::PyList(unsigned size){
    mySize = size;
    myCapacity = 0;
    myArray = new Item[mySize];
}

// copy constructor
PyList::PyList(PyList & other){
    mySize = other.mySize;
    myCapacity = other.myCapacity;
    if(mySize > 0){
        myArray = new Item[mySize];
        for(unsigned i = 0; i < myCapacity; i++){
            myArray[i] = other.myArray[i];
        }
    }
    else {
        myArray = nullptr;
    }
}


PyList::~PyList(){

}

// getters

unsigned PyList::getSize() const{
    return mySize;
}

void PyList::append(Item it){
    if(myCapacity < mySize){
        myArray[myCapacity] = it;
    }
    else{
        if(mySize == 0){
            myArray = new Item[1];
        }
        else{
            Item *newArray = new Item[mySize+1];
            for(unsigned i=0; i < myCapacity; i++){
                newArray[i] = myArray[i];
            }
            delete []myArray;
            myArray = newArray;
        }
        myArray[myCapacity] = it;
        mySize++;
    }
    myCapacity++;

}