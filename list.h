//
// Created by Usuario on 8/18/2022.
//

#ifndef BASE_CPP_LIST_H
#define BASE_CPP_LIST_H
#include "node.h"

template <class Type>
class List {
private:
    int len;
    Node<Type>* first;
public:
    List();
    ~List();
    int length();
    void append(Type);
    Type pop();
};

template <class Type>
List<Type>::List(){
    this->len = 0;
    this->first = NULL;
}

template <class Type>
List<Type>::~List(){
    while(this->len > 0){
        this->pop();
    }
}

template <class Type>
inline int List<Type>::length(){
    return this->len;
}

template <class Type>
void List<Type>::append(Type val){
    Node<Type>* newNode = new Node<Type>(val);
    if (this->len == 0){
        this->first = newNode;
    }
    else {
        Node<Type>* aux = this->first;
        for (; aux->getNext() != NULL; aux = aux->getNext()){}
        aux->setNext(newNode);
    }
    this->len++;
}

template <class Type>
Type List<Type>::pop(){
    Type result;
    if (this->len == 0)
        return NULL;
    if (this->len == 1){
        result = this->first->getValue();
        delete this->first;
    } else {
        Node<Type>* aux = this->first;
        for (; aux->getNext()->getNext() != NULL; aux = aux->getNext()){}
        result = aux->getNext()->getValue();
        delete aux->getNext()->getNext();
    }
    this->len--;
    return result;
}

#endif //BASE_CPP_LIST_H
