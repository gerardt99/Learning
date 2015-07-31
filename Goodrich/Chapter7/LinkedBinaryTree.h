typedef int Elem;
class LinkedBinaryTree {
protected:
    //insert Node dec here
public:
    //insert Position dec
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    PositionList positions() const;
    void addRoot();
    void expandExternal(const Position& p);
    Position removeAboveExternal(const Position& p);
    // housekeeping
protected:
    void preorder(Node* v, PositionList& pl) const;
private:
    Node* _root;
    int n;
};
