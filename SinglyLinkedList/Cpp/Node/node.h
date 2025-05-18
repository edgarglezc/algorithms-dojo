#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node *next;

public:
    Node();
    Node(int value);
    Node(int value, Node *next);
    
    ~Node();

    void setData(int value);
    void setNext(Node *next);
    int getData();
    Node *getNext();
};

#endif
