template <typename E>
class BinaryTree<E> {
public:
    class Position;
    class PositionList;
public:
    int size() const;
    bool empty() const;
    Position root() const;
    PositionList positions() const;
};
