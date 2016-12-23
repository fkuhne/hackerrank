/* 

https://www.hackerrank.com/challenges/tree-postorder-traversal

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

https://en.wikipedia.org/wiki/Tree_traversal:

Check if the current node is empty / null
Traverse the left subtree by recursively calling the post-order function.
Traverse the right subtree by recursively calling the post-order function.
Display the data part of the root (or current node).
*/

void postOrder(node *root) {
    
    if(!root) return;
    
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
