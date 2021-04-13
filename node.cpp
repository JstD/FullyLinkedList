#include "node.h"

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

template <class T>
void SingleLinkedListNode<T>::operator +=(SingleLinkedListNode<T> p){
    this->data = this->data + p.data;
};

template <class T>
void SingleLinkedListNode<T>::operator +=(T p){
    this->data = this->data + p;
};

template <class T>
void SingleLinkedListNode<T>::operator =(T p){
    this->data = p;
};

template <class T>
void SingleLinkedListNode<T>::operator =(SingleLinkedListNode<T> p){
    this->data = p.data;
};

template <class T>
bool SingleLinkedListNode<T>::operator <(SingleLinkedListNode<T> p){
    return this->data < p.data;
};

template <class T>
bool SingleLinkedListNode<T>::operator >(SingleLinkedListNode<T> p){
    return this->data > p.data;
};

template <class T>
bool SingleLinkedListNode<T>::operator >=(SingleLinkedListNode<T> p){
    return this->data >= p.data;
};

template <class T>
bool SingleLinkedListNode<T>::operator <=(SingleLinkedListNode<T> p){
    return this->data <= p.data;
};

template <class T>
bool SingleLinkedListNode<T>::operator ==(SingleLinkedListNode<T> p){
    return this->data == p.data;
};

template <class T>
bool SingleLinkedListNode<T>::operator >(T p){
    return this->data > p;
};

template <class T>
bool SingleLinkedListNode<T>::operator <(T p){
    return this->data < p;
};

template <class T>
bool SingleLinkedListNode<T>::operator <=(T p){
    return this->data <= p;
};

template <class T>
bool SingleLinkedListNode<T>::operator >=(T p){
    return this->data >= p;
};

template <class T>
bool SingleLinkedListNode<T>::operator ==(T p){
    return this->data == p;
};

//