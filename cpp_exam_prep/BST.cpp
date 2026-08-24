#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        // Constructor
        Node(int val) {
            data = val; 
            left = NULL;
            right = NULL;
        }
};

Node* insertBST(Node* root, int val){
    // 3 steps mai insertion complete hoga. 
    // -1- pehle check kro koi node hai ya nhi if not then create a one. 
    // -2- then compare krke values t/f kro. | GOLDEN RULE 
    // -3- end mai root ko return krke sbko link krdo. 

    if(root == NULL){
        return new Node(val); 
    }

    if(val < root-> data){
        root -> left = insertBST( root -> left, val); // choti value left mai ptko. 
    }

    if(val > root -> data){
        root -> right = insertBST( root -> right, val); // bdi value right mai ptkko. 
    }

    return root; 

};

Node* searchBST(Node* root, int target){
    // 3 steps mai searching complete hoga. 
    // -1- pehle check kro koi node hai ya nhi aur root value hee toh khi target nhi < this will eventually help in recursion.>
    // -2- If target is smaller, strictly search the left side
    // -3- If target is smaller, strictly search the right side.   

    if( root == NULL || root -> data == target){
        return root; 
    } 
    if(target < root->data){
        return searchBST(root -> left, target);
    }
    return searchBST(root -> right, target);
}

// OUR STANDARD TO TRAVERSE OR PRINT THE TREES. 
void inOrder(Node* root) {
    if (root == NULL) return;

    inOrder(root->left);       // Traverse Left subtree
    cout << root->data << " "; // Process Root
    inOrder(root->right);      // Traverse Right subtree
}


int main(){

    Node* root = NULL; 

    // Defining the base i.e. our ROOT node. 
    root = insertBST(root, 50); 

    // adding more data to make exact insertions. 
    root = insertBST(root, 30);
    root = insertBST(root, 20);
    root = insertBST(root, 40);
    root = insertBST(root, 70);
    root = insertBST(root, 60);
    root = insertBST(root, 80);

    // Print the values in sorted manner using inOrder. 
    cout << "In-Order Traversal (Sorted Output): ";
    inOrder(root);
    cout << endl; 

    cout << "ENTER SEARCH VALUE : "; 
    int targetKey;
    cin >> targetKey;
    int target = targetKey;
     
    Node* result = searchBST(root, target);
    bool found = (result != NULL);
    if (result == NULL) {
        cout << "Alert: Target " << target << " was NOT FOUND in the tree." << endl;
    } else {
        cout << "Success: Target " << target << " was FOUND!" << endl;
    }

    return 0; 
}