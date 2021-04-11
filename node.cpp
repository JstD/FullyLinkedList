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
    T result;
    try{
        result = this->data + p.data;
    }
    catch(...){
        cout<<"Can't define operator '+' with "<<typeid(this->data).name()<<endl;
        exit(-1);
    }
    return result;
}

template <class T>
T SingleLinkedListNode<T>::operator+(T p){
    T result;
    try{
        result = this->data + p;
    }
    catch(...){
        cout<<"Can't define operator '+' with "<<typeid(p).name()<<endl;
        exit(-1);
    }
    return result;
}


