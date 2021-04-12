#include "linkedlist.h"

/*
    This file implement linkedlist.h
*/
template<class T>
SingleLinkedList<T>::SingleLinkedList(){
    this->head = nullptr;
    this->size =0;
}

template<class T>
SingleLinkedList<T>::SingleLinkedList(SingleLinkedListNode<T> *head){
    while(head){
        this->push(head->data);
        head = head->next;
    }
}

template<class T>
SingleLinkedList<T>::SingleLinkedList(SingleLinkedList<T>* lst){
    SingleLinkedListNode<T> *head = lst->head;
    while(head){
        this->push(head->data);
        head = head->next;
    }
}

template<class T>
void SingleLinkedList<T>::insertHead(T data){
    SingleLinkedListNode<T> *node = new SingleLinkedListNode<T>(data);
    if(!node)
        cout<<"Full memory, can't insert!!";
    else{
        node->next = this->head;
        size++;
    }
    this->head = node;
}

template<class T>
void SingleLinkedList<T>::push(T data){
    SingleLinkedListNode<T> *node = new SingleLinkedListNode<T>(data);
    if(!node)
        cout<<"Full memory, can't insert!!";
    else{
        size++;
        if(!this->head)
            this->head = node;
        else{
            SingleLinkedListNode<T>* temp = this->head;
            while(temp->next)
                temp = temp->next;
            temp-> next = node;
        }
    }
}

template<class T>
void SingleLinkedList<T>::insertAt(T data,int pos){
    if(pos == 0)
        this->insertHead(data);
    else if(pos == this->size-1)
        this->push(data);
    else if(pos >= size || pos<0)
        cout<<"Indexed out of range";
    else{
        SingleLinkedListNode<T> *node = new SingleLinkedListNode<T>(data);
        if(node){
            size ++;
            SingleLinkedListNode<T> *temp = this->head;
            for(int i=1;i<pos;i++){
                temp = temp->next;
            }
            node->next =temp->next;
            temp->next = node;
        }
        else{
            cout<<"Full memory, can't insert new node";
        }
    }
}

template<class T>
SingleLinkedListNode<T> &SingleLinkedList<T>::at(int pos){
    if(pos>-1 && pos<this->size){
        SingleLinkedListNode<T>*temp = this->head;
        for(int i=0;i<pos;i++){
            temp = temp->next;
        }
        return *temp;
    }
    else{
        cout<<"Indexed out of range";
        exit(0);
    }
}

template<class T>
void SingleLinkedList<T>::popBack(){
    if(size==0){
        cout<<"Can't pop from empty list";
    }
    else if(size==1){
        size--;
        delete this->head;
        this->head = nullptr;
    }
    else if(size == 2){
        delete this->head->next;
        this->head->next =nullptr;
        size --;
    }
    else{
        SingleLinkedListNode<T> *temp = this->head;
        while(temp->next->next)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
        size --;
    }
}

template<class T>
void SingleLinkedList<T>::popHead(){
    if(size==0){
        cout<<"Can't pop from empty list";
    }
    else{
        SingleLinkedListNode<T>*temp = this->head;
        this->head = this->head->next;
        size--;
        delete temp; 
        temp = nullptr;
    }
}

template<class T>
void SingleLinkedList<T>::popAt(int pos){
    if(pos==0)
        this->popHead();
    else if(pos == size -1)
        this->popBack();
    else if(pos>=size || pos<0){
        cout<<"Indexed out of range";
    }
    else{
        SingleLinkedListNode<T> *temp = this->head;
        for(int i=1;i<pos;i++)
            temp = temp->next;
        SingleLinkedListNode<T> *p = temp->next;
        temp->next =temp->next->next;
        delete p;
        p= nullptr;
        size--;
    }
}

template<class T>
void SingleLinkedList<T>::del(T data){
    SingleLinkedListNode<T> * temp = this->head;
    if(this->head->data = data)
        this->popHead();
    while(temp->next){
        if(temp->next->data==data){
            SingleLinkedListNode<T> *del = temp->next;
            temp->next = del->next;
            delete del;
            del = nullptr;
            size--;
            break;
        }
        temp = temp->next;
    }
}

template<class T>
void SingleLinkedList<T>::dels(T data){
    SingleLinkedListNode<T> * temp = this->head;
    if(this->head->data = data)
        this->popHead();
    while(temp->next){
        if(temp->next->data==data){
            SingleLinkedListNode<T> *del = temp->next;
            temp->next = del->next;
            delete del;
            del = nullptr;
            size--;
        }
        else{
            temp = temp->next;
        }
    }
}

template<class T>
SingleLinkedListNode<T>& SingleLinkedList<T>::operator[](int i){
    return at(i);
}