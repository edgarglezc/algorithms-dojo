#include "node.h"

Node::Node() : data(0), next(nullptr) { }

Node::Node(int value) : data(value), next(nullptr) { }

Node::Node(int value, Node *next) : data(value), next(next) { }

Node::~Node() { }

void Node::setData(int value) {
    this->data = value;
}

void Node::setNext(Node *next) {
    this->next = next;
}


int Node::getData() {
    return this->data;
}

Node *Node::getNext() {
    return this->next;
}