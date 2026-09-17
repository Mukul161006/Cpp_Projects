#include <iostream>
using namespace std;

class Node{

    public: 
        int data;
        Node *ptr;

        Node(int x){
            data = x; 
            ptr = NULL;
        }
};

void Sll_traverse(Node* &node1){ // Here this argument is stating the compiler to first expect an pointer coming in < Node* > of node class as an referenced object < &node1 >.
    Node* temp = node1;
    while( temp != NULL ){
        cout << temp -> data << " -> ";
        temp = temp -> ptr;
    }
    cout << "NULL";
}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head -> ptr = second; 
    second -> ptr = third; 
    third -> ptr = NULL; 
    
    Sll_traverse(head);

    return 0;
}