#include "PyList.h"
#include <stdexcept>
#include <iostream>

using namespace std;


// default constructor
PyList::PyList(){
    myArray = nullptr;
    myCapacity = 0;
    mySize = 0;
}


// explicit-value constructor
PyList::PyList(unsigned size){
    mySize = 0;
    myCapacity = size;
    myArray = new Item[myCapacity];
}

// copy constructor
PyList::PyList(PyList & other){
    mySize = other.mySize;
    myCapacity = other.myCapacity;
    if(myCapacity > 0){
        myArray = new Item[myCapacity];
        for(unsigned i = 0; i < mySize; i++){
            myArray[i] = other.myArray[i];
        }
    }
    else {
        myArray = nullptr;
    }
}


PyList::~PyList(){
    delete []myArray;
    // cout << "I'm dyiiiiiiiiiing!!" << endl;
}

// getters

unsigned PyList::getSize() const{
    return mySize;
}

void PyList::append(Item it){
    if(mySize < myCapacity){
        myArray[mySize] = it;
    }
    else{
        if(myCapacity == 0){
            myArray = new Item[1];
            myCapacity = 1;
        }
        else{
            Item *newArray = new Item[myCapacity*2];
            for(unsigned i=0; i < mySize; i++){
                newArray[i] = myArray[i];
            }
            delete []myArray;
            myArray = newArray;
            myCapacity*=2;
        }
        myArray[mySize] = it;
    }
    mySize++;

}

Item PyList::getItem(unsigned index) const{
    if(index < 0 || index > mySize){
        throw invalid_argument("You silly goose! This index is invalid.");
    }
    return myArray[index];

}


void PyList::setItem(unsigned index, Item it){
    if(index < 0 || index > mySize){
        throw invalid_argument("You silly goose! This index is invalid.");
    }
    myArray[index] = it;

}

ostream &operator<<(ostream &out, PyList p){
    out << "[";
    for(unsigned i = 0 ; i < p.getSize(); i++){
        out << p.getItem(i) << ", ";
    }
    out << "]";
    return out;
}


Item PyList::operator[](unsigned index) const{
    return getItem(index);
}

void PyList::removeAt(unsigned index){
    if(index < 0 || index > mySize){
        throw invalid_argument("You silly goose! This index is invalid.");
    }
    for(unsigned i=index; i < mySize; i++){
        myArray[i] = myArray[i+1];
    }
    mySize--;
}