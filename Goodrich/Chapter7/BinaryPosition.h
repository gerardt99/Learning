template <typename E>
class Position<E> {
public:
    E& operator*();
    Position left() const;
    Position right() const;
    Position parent() const;
    bool is Root() const;
    bool isExternal() const;
};
