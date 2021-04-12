/*
This class define a node for single linked list
It has fully operators to use 
*/
#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

template <class T>
class SingleLinkedListNode{
public:
    T data; // data of node
    SingleLinkedListNode *next; // pointer to next node
    // SingleLinkedListNode(); // default constructor
    SingleLinkedListNode(T); //  constructor with data
    SingleLinkedListNode(SingleLinkedListNode*); //copy constructor
    /*
    Methods below used to overloading operator
    */
    T operator+(SingleLinkedListNode);
    T operator+(T);
    T operator-(T);
    T operator-(SingleLinkedListNode);
    T operator*(SingleLinkedListNode);
    T operator*(T);
    T operator/(T);
    T operator/(SingleLinkedListNode);
    T operator-();
    void operator +=(SingleLinkedListNode);
    void operator +=(T);
    void operator =(T);
    void operator =(SingleLinkedListNode);
    bool operator<(SingleLinkedListNode);
    bool operator<(T);
    bool operator>(SingleLinkedListNode);
    bool operator>(T);
    bool operator<=(SingleLinkedListNode);
    bool operator<=(T);
    bool operator>=(SingleLinkedListNode);
    bool operator>=(T);
    bool operator==(T);
    bool operator==(SingleLinkedListNode);
    friend ostream &operator<<(ostream &out,SingleLinkedListNode<T>p){
        out<<p.data;
        return out;
    }
    // friend std::ifstream operator>>(std::ifstream &in,SingleLinkedListNode<T>&p){
    //     in >> p.data;;
    //     return in;
    // }
};
#endif