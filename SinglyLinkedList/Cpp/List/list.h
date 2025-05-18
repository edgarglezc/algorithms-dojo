#ifndef LIST_H
#define LIST_H

#include "node.h"
#include <string>

class List {
private:
    Node *head;

public:
    List();
    List(Node* head);
    ~List();

    void insertData(int value);
    void deleteData(Node *node);
    
    Node *searchData(int value);
    int getData(Node* node);

    Node* getFirst();
    Node* getLast();
    Node* getNext(Node* node);
    Node* getPrev(Node* node);

    std::string toString();
};

#endif