


template <typename T>
class List {
    public:
        List();
        ~List();
        int getSize();
        void prepend(T it);
        T getFirst();
        T getLast();

    private:
        class Node{
            public:
                Node(); // default constructor
                Node(const T &it); // explicit-value
                Node(T &it, Node *next); // explicit-value
                ~Node(); // destructor
                T getItem() const;
            private:
                T myItem;
                Node * myNext;
        };
        Node * myFirst;
        Node * myLast;
        int mySize;
};


// Nodes methods
template <typename T>
T List<T>::Node::getItem() const{
    return myItem;
}

template <typename T>
List<T>::Node::Node(){
    myItem = T();
    myNext = nullptr;
}

template <typename T>
List<T>::Node::Node(const T & it){
    myItem = it;
    myNext = nullptr;
}

template <typename T>
List<T>::Node::Node(T &it, Node * next){
    myItem = it;
    myNext = next;
}

template <typename T>
List<T>::Node::~Node(){
    delete myNext;
}


template <typename T>
List<T>::List(){
    myFirst = myLast = nullptr;
    mySize = 0;
}

template <typename T>
List<T>::~List(){
    delete myFirst;
}

template <typename T>
int List<T>::getSize(){
    return mySize;
}

template <typename T>
void List<T>::prepend(T it){
    Node * newNode = new Node(it, myFirst);
    myFirst = newNode;
    if(mySize == 0) myLast = newNode;
    mySize++;
}


template <typename T>
T List<T>::getFirst(){
    return myFirst->getItem();
}
