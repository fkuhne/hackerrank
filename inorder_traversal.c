/* https://www.hackerrank.com/challenges/tree-inorder-traversal

you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

/*

https://en.wikipedia.org/wiki/Tree_traversal

Check if the current node is empty / null
Traverse the left subtree by recursively calling the in-order function.
Display the data part of the root (or current node).
Traverse the right subtree by recursively calling the in-order function.
*/

void inOrder(node *root) {

    if(!root) return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}
