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

Node* insert(Node *groot, int value){
    if( groot == NULL){
        return new Node(value);
    } else if ( value < groot -> data){
        groot -> left = insert(groot -> left, value);
    } else {
        groot -> right = insert(groot -> right, value);
    }

    return groot; 
}

Node* search(Node* groot, int target){
    if ( groot == NULL || groot -> data == target){
        return groot; 
    } else if (target < groot -> data){
        return search(groot -> left, target);
    } else {
        return search(groot -> right, target);
    }
}

void inOrder(Node *root){
    if(root == NULL){
        return;
    }

    inOrder(root -> left); 
    cout << root -> data << " "; 
    inOrder(root -> right);
};

int main(){

    Node* root = NULL;  

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);

    cout << "In ordered nodes values are : \n"; 
    inOrder(root);

    cout << "\n";

    int target = 20;
    Node* result = search(root, target); 
    bool found = (result != NULL); 

    if( result == NULL){
        cout << "TARGET Not found | TARGET VALUE : " << target << endl; 
    } else {
        cout << "Target was found | TARGET VALUE : " << target << endl;
    }

    return 0; 
}