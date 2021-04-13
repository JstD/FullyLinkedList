/*S.t to test the most useful lib*/
#include "linkedlist.cpp"
#include<iostream>
using namespace std;
int main(){
    SingleLinkedList<int> lst;
    for(int i=0;i<10;i++){
        lst.push(i);
    }
    lst[0]=5;
    for(int i=0;i<10;i++){
        cout<<lst.at(i)<<endl;
    }
}