template <typename E>
class Position<E> {
    E& operator*();
    Position parent() const;
    PositionList children() const;
    bool isRoot() const;
    bool isExternal() const;
};
