#include <iostream>
using namespace std;

class Node{
    public: 
        int data; 
        Node* left; 
        Node* right; 

    Node(int value){
        data = value; 
        left = NULL; 
        right = NULL;
    }
};

void inOrder(Node* groot){
    if(groot == NULL){
        return;
    } 

    inOrder(groot -> left); 
    cout << groot -> data << " "; 
    inOrder(groot -> right);

}

void preOrder(Node* groot){
    if(groot == NULL){
        return;
    } 

    cout << groot -> data << " ";
    preOrder(groot -> left); 
    preOrder(groot -> right);

}

void postOrder(Node* groot){
    if(groot == NULL){
        return;
    } 

    postOrder(groot -> left); 
    postOrder(groot -> right);
    cout << groot -> data << " ";

}

int main(){

    Node* root = new Node(10); 

    root -> left = new Node(9); 
    root -> right = new Node(11);

    cout << "In ordered nodes data is : \n";
    inOrder(root); 

    cout << "\nPre ordered nodes data is : \n";
    preOrder(root);

    cout << "\nPost ordered nodes data is : \n";
    postOrder(root);   

    return 0; 
}