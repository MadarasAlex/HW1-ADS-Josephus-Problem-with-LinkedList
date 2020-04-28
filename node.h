#ifndef JOSEPHUS_NODE_H
#define JOSEPHUS_NODE_H


#include <type_traits>

class Node {
private:
    int val;
    Node * next;

public:
    void setVal(int)  ;
    int getVal() const;
    Node* getNext() const;
    void setNext(Node*);
};


#endif //JOSEPHUS_NODE_H
