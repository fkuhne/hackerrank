/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

/*

https://www.hackerrank.com/challenges/tree-preorder-traversal

https://en.wikipedia.org/wiki/Tree_traversal:

Check if the current node is empty / null
Display the data part of the root (or current node).
Traverse the left subtree by recursively calling the pre-order function.
Traverse the right subtree by recursively calling the pre-order function.
 */

void preOrder(node *root) {

    if(!root) return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
