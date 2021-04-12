/*S.t to test the most useful lib*/
// #include "node.h"
#include "node.cpp"
#include<iostream>
using namespace std;
int main(){
    // SingleLinkedListNode<string> p =  SingleLinkedListNode<string>("123");
    // SingleLinkedListNode<string>q =  SingleLinkedListNode<string>("456");
    // cout<<p-q;
    string a = "123";
    string b = "456";
    string c;
    try{
        c = a-b;
    }
    catch(...){
        cout<<'1';
        exit(0);
    }
}