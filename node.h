template <class T>
/*
This class define a node for single linked list
It has fully operators to use 
*/
class SingleLinkedListNode{
public:
    T data; // data of node
    SingleLinkedListNode *next; // pointer to next node
    SingleLinkedListNode(); // default constructor
    SingleLinkedListNode(T); //  constructor with data
    SingleLinkedListNode(SingleLinkedListNode*); //copy constructor
};