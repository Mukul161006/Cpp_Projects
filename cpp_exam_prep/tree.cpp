#include <iostream>
using namespace std;

class Node{
    public: 
        int data; 
        Node* left; 
        Node* right; 

        // Constructor
        Node(int value){
            data = value; 
            left = NULL; 
            right = NULL; 
        } 
}; 

// PRE-ORDER TRAVERSE : Root > Left > Right | root k aage hamesha space aayegi. 
void preOrder(Node *root){
    if(root == NULL){
        return; 
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

}

// 2. IN-ORDER: Left -> Root -> Right
void inOrder(Node* root) {
    if (root == NULL) return;

    inOrder(root->left);       // Traverse Left subtree
    cout << root->data << " "; // Process Root
    inOrder(root->right);      // Traverse Right subtree
}

// 3. POST-ORDER: Left -> Right -> Root
void postOrder(Node* root) {
    if (root == NULL) return;

    postOrder(root->left);     // Traverse Left subtree
    postOrder(root->right);    // Traverse Right subtree
    cout << root->data << " "; // Process Root

}

int main(){

    // Creating the main root node. 
    Node *root = new Node(1); 

    // Attaching the child nodes. 
    root->left = new Node(2); 
    root->right = new Node(3); 

    // Attaching another child to node 2
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Tree created successfully !!" << endl; 

    cout << "Pre-order:  ";
    preOrder(root);   // Output: 1 2 4 5 3
    cout << endl; 

    cout << "In-order:   ";
    inOrder(root);    // Output: 4 2 5 1 3
    cout << endl;

    cout << "Post-order: ";
    postOrder(root);  // Output: 4 5 2 3 1
    cout << endl;

    return 0; 
}