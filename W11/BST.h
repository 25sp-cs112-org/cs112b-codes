

typedef int Item;

class BST{

    private:
        class Node {
            public:
                Node(Item &it);
                // ~Node();
                Item getItem() const;
                void addNode(Item &it);

            private:
                Node * leftChild;
                Node * rightChild;
                Item myItem;
        };

        Node * myRoot;
        int mySize;

    public:
        BST();
        BST(Item it);
        // ~BST();
        void insert(Item it);
        bool isEmpty() const;
        int getSize() const;
        Item & removeItem(const Item &it);
        void printBST();
        // Node & search(const Item &it);
};