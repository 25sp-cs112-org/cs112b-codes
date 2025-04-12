#include "BST.h"
#include <iostream>

using namespace std;

// Default constructor
BST::BST(){
    myRoot = nullptr;
    mySize = 0;

}

// Explicit-value constructor
BST::BST(Item it){
    myRoot = new Node(it);
    mySize = 1;
}

// Explicit-value constructor
BST::Node::Node(Item &it){
    myItem = it;
    rightChild = leftChild = nullptr;
}

void BST::insert(Item it){
    if(mySize==0){
        myRoot = new Node(it);
        mySize++;
        return;
    }
    else{
        myRoot->addNode(it);
        mySize++;
    }    
}

void BST::Node::addNode(Item &it){
    if(it < myItem){
        if(leftChild == nullptr){
            leftChild = new Node(it);
        }
        else{
            leftChild->addNode(it);
        }
    }
    if(it > myItem){
        if (rightChild == nullptr){
            rightChild = new Node(it);
        }
        else{
            rightChild->addNode(it);
        }
    }
}

void BST::printBST(){
    if(myRoot != nullptr){
        cout << myRoot->getItem() << endl;
        
    }
}