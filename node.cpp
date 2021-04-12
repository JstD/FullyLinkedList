#include "node.h"
#include<iostream>
using namespace std;
/*
Implement class of SingleLinkedListNode with its methods
*/
template <class T>
SingleLinkedListNode<T>::SingleLinkedListNode(T data){
    this->data = data;
    this->next = nullptr;
}

template <class T>
SingleLinkedListNode<T>::SingleLinkedListNode(SingleLinkedListNode* node){
    this->data = node->data;
    this->next = nullptr;
}


template <class T>
T SingleLinkedListNode<T>::operator+(SingleLinkedListNode<T> p){
    return this->data + p.data;
}

template <class T>
T SingleLinkedListNode<T>::operator+(T p){
    return this->data + p;
}
template <class T>
T SingleLinkedListNode<T>::operator-(SingleLinkedListNode<T> p){
    return this->data - p.data;
};

template <class T>
T SingleLinkedListNode<T>::operator-(T p){
    return this->data - p;
};

template <class T>
T SingleLinkedListNode<T>::operator*(SingleLinkedListNode<T> p){
    return this->data - p.data;
};

template <class T>
T SingleLinkedListNode<T>::operator*(T p){
    return this->data * p;
};


template <class T>
T SingleLinkedListNode<T>::operator/(T p){
    return this->data / p;
};

template <class T>
T SingleLinkedListNode<T>::operator/(SingleLinkedListNode<T> p){
    return this->data / p.data;
};

template <class T>
T SingleLinkedListNode<T>::operator-(){
    return - this->data;
};

