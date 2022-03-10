#include <bits/stdc++.h>
using namespace std;

//create a node
class Node{
    public:
    int data;
    Node *next;
};
//program to print a node
void printli(Node *n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n = n->next;
    }
}
int main(){
    //everything is null
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* four = NULL;
    //creating a memory address
    head = new Node();
    second = new Node();
    third = new Node();
    four = new Node();
    //add data and next 
    head->data = 1;
    // cout<<second;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = four;
    four->data = 4;
    four->next = NULL;
    //print the linked list
    printli(head);
    // cout<<head->data;
    
}
