/*S.t to test the most useful lib*/
// #include "linkedlist.h"
#include "linkedlist.cpp"
#include<iostream>
using namespace std;
int main(){
    SingleLinkedList<int> lst;
    for(int i=0;i<10;i++){
        lst.push(i);
    }
    lst[2]=3;
    for(int i=0;i<10;i++){
        cout<<lst[i]<<endl;
    }
}