#include <iostream>
using namespace std;

template <typename E>
class Stack {
public:
    int size() const;
    bool empty() const;
    const E& top() const throw(StackEmpty);
    void push(const E& e);
    void pop() throw(StackEmpty);
};

