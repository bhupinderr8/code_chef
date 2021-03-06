
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure for tree and linked list
struct Node
{
    int data;
    // left is used as previous and right is used
    // as next in DLL
    Node *left, *right;
}; */
// This function should convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list
void BToDLL(Node *root, Node **head_ref)
{   
    if(!root) return;
    static Node * prev = NULL;

    BToDLL(root->left, head_ref);

    if((*head_ref) == NULL){
        *head_ref = root;
        prev = NULL;
    }
    else{
        prev->right = root;
        root->left = prev;
    }

    prev = root;
    BToDLL(root->right, head_ref);

}
