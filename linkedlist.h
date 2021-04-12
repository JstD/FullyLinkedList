#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
#include "node.cpp"

/*
    This class define a list with suitable operators
*/
template<class T>
class SingleLinkedList{
private:
    SingleLinkedListNode<T> *head; // pointer to head node
    size_t size; // number elements
public:
    SingleLinkedList(); // default constructor
    SingleLinkedList(SingleLinkedListNode<T> *);// copy constructor with a head node
    SingleLinkedList(SingleLinkedList<T> *); // copy constructor with other list
    void insertHead(T); // insert a node at header of list.
    void push(T); // insert a node at tail of list.
    void insertAt(T,int); // insert at an arbitrary position with index from 0.
    SingleLinkedListNode<T> &at(int); //return i-th element of list.
    void popBack(); // delete last element.
    void popHead(); //delete the first element.
    void popAt(int); //delete the i-th element.
    void del(T); //delete one node with its value.
    void dels(T); //delete all nodes with their value.
    void reverseList(); //reverse list
    void traverseList(void*); //visit all nodes in list and do somethings
    SingleLinkedListNode<T> find(T);
    /*
    Methods below used to overloading operator
    */
    SingleLinkedList operator+(const SingleLinkedList); //return new list = this list + arg list
    SingleLinkedList operator*(const int); //scale list x times, return other list
    void operator=(SingleLinkedList); //copy others list to this list  
    
    SingleLinkedListNode<T> &operator[](int i);
    void operator +=(SingleLinkedList);
    void operator *=(int);
    // friend ostream &operator<<(ostream &,SingleLinkedList&);
    // friend ifstream &operator>>(ostream &,SingleLinkedList&);
};

#endif