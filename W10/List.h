


class List
{

    private:
    struct Node
    {
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = nullptr;
        } 
    };

    void printRecursive(Node* node) const;

    Node* head;
    Node* tail;
    int listSize;
public:
    List();
    ~List();

    void add(int value);
    void remove(int value);
    bool contains(int value) const;
    int size() const;
    void print() const;
    
    void print2() const;


};