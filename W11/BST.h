

typedef Item int;

class BST{
    public:
        BST();
        ~BST();
        bool isEmpty() const;
        int getSize() const;
        void addItem(const Item &it);
        Item & removeItem(const Item &it);
        Node & search(const Item &it);

    private:
        class Node {
            public:
                Node();
                ~Node();
                Item getItem() const;
                void addNode(const Item &it);

            private:
                Node * left;
                Node * right;
                Item item;
        };

        Node * root;
        int mySize;


};