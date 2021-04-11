/*S.t to test the most useful lib*/
#include "node.h"

#include<iostream>
using namespace std;
int main(){
    SingleLinkedListNode<int> p =  SingleLinkedListNode<int>(1);
    SingleLinkedListNode<int>q =  SingleLinkedListNode<int>(2);
    cout<<p+q;
}