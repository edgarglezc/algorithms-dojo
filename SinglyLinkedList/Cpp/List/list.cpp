#include "list.h"
#include <sstream>

List::List() : head(nullptr) { }

List::List(Node* head) {
    // Copy
}

List::~List() {
    // Destructor
}

void List::insertData(int value) {
    Node* newNode = new Node(value);

    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node* auxNode = this->getLast();

    newNode->setNext(auxNode->getNext());
    auxNode->setNext(newNode);
}

void List::deleteData(Node *node) {

}

Node *List::searchData(int value) {

}

int List::getData(Node* node) {

}

Node *List::getFirst() {

}

Node *List::getLast() {
    Node* auxNode = head;
    
    while(auxNode->getNext() != nullptr) {
        auxNode = auxNode->getNext();
    }

    return auxNode;
}

Node *List::getNext(Node* node) {

}

Node *List::getPrev(Node* node) {

}

std::string List::toString() {
    Node* auxNode = head;
    std::stringstream result("");

    while(auxNode != nullptr) {
        result << auxNode->getData() << " | ";
        auxNode = auxNode->getNext();
    }

    return result.str();
}
