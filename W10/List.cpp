#include "List.h"
#include <iostream>
#include <stdexcept>

using namespace std;


List::List() : head(nullptr), tail(nullptr), listSize(0) {}

List::~List() {
    delete head;
}

void List::add(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    listSize++;
}

void List::remove(int value) {
    if (head == nullptr) {
        throw std::runtime_error("List is empty");
    }

    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        throw runtime_error("Value not found in the list");
    }

    if (previous == nullptr) {
        head = current->next;
    } else {
        previous->next = current->next;
    }

    if (current == tail) {
        tail = previous;
    }

    delete current;
    listSize--;
}

bool List::contains(int value) const {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}


int List::size() const {
    return listSize;
}

void List::print() const {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void List::printRecursive(Node* node) const{
    if (node == nullptr) {
        return;
    }
    printRecursive(node->next);
    cout << node->data << " ";
}

void List::print2() const{
    printRecursive(head);
    cout << endl;
}