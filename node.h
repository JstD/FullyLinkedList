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

    /*
    Methods below used to overloading operator
    */
    T operator+(SingleLinkedListNode);
    T operator+(T);
    T operator-(T);
    T operator*(SingleLinkedListNode);
    T operator*(T);
    T operator/(T);
    T operator()();
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
    bool operator==();
};