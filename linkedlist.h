#include "node.h"

/*
    This class define a list with suitable operators
*/
template<class T>
class SingleLinkedList{
private:
    SingleLinkedListNode *head; // pointer to head node
    size_t size; // number elements
public:
    SingleLinkedList(); // default constructor
    SingleLinkedList(SingleLinkedListNode *);// copy constructor with a head node
    SingleLinkedList(SingleLinkedList *); // copy constructor with other list
    /*
    All function has return type of SingleLinkedListNode* will return head pointer 
    Except some specifical cases will be descripted details with its function.
    Exception will be catched with try-catch (don't use anyothers technique that can impact user coding style)
    */
    SingleLinkedListNode* insertHead(T); // insert a node at header of list.
    SingleLinkedListNode* push(T); // insert a node at tail of list.
    SingleLinkedListNode* insertAt(T,int); // insert at an arbitrary position with index from 0.
    SingleLinkedListNode* at(int); //return i-th element of list.
    SingleLinkedListNode* popBack(); // delete last element.
    SingleLinkedListNode* popHead(); //delete the first element.
    SingleLinkedListNode* popAt(int); //delete the i-th element.
    SingleLinkedListNode* del(T); //delete one node with its value.
    SingleLinkedListNode* dels(T); //delete all nodes with their value.
    SingleLinkedListNode* reverseList(); //reverse list
    void traverseList(void*); visit all nodes in list and do somethings
    /*
    Methods below used to overloading operator
    */
    SingleLinkedList operator+(const SingleLinkedList); return new list = this list + arg list
    SingleLinkedList operator*(const int); scale list x times, return other list
    void operator=(const SingleLinkedList); copy others list to this list  
    SingleLinkedListNode operator[](int);
    void operator +=(SingleLinkedList);
    void operator *=(int);
};