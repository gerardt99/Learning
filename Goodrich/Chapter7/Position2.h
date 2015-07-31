class Position {
private:
    Node* v;
public:
    Position(Node* _v = NULL) : v(_v) {}
    Elem& operator*()
        {return v->elt;}
    Position left() const
	{return Position(v->left);}
    Position right() const
	{return Position(v->right);}
    Position parent() const
	{return Position(v->par);}
    bool isRoot() const
	{return v->par == NULL;}
    bool isExternal() const
	{return v->left == NULL && v->right == NULL;}
    friend class LinkedBinaryTree;
};
typedef std::list<Position> PositionList;
