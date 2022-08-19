//
// Created by Usuario on 8/18/2022.
//

#ifndef BASE_CPP_NODE_H
#define BASE_CPP_NODE_H
#include <stddef.h>

using namespace std;

template <class Type>
class Node {
private:
    Type value;
    Node* next;
public:
    Node(Type val);
    Node();
    ~Node();
    Type getValue();
    void setValue(Type val);
    Node* getNext();
    void setNext(Node* next);
};

template <class Type>
Node<Type>::Node(Type val){
    this->value = val;
    this->next = NULL;
}

template <class Type>
Node<Type>::Node(){
    this->next = NULL;
}

template <class Type>
Node<Type>::~Node(){
}

template <class Type>
inline Type Node<Type>::getValue(){
    return this->value;
}

template <class Type>
inline void Node<Type>::setValue(Type val){
    this->value = val;
}

template <class Type>
inline Node<Type>* Node<Type>::getNext(){
    return this->next;
}

template <class Type>
inline void Node<Type>::setNext(Node<Type> *next){
    this->next = next;
}

#endif //BASE_CPP_NODE_H
