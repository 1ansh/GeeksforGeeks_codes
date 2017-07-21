/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void leftView(Node *root)
{
    if(root == NULL)
    {
        return;
    }
   cout<<root->data<<" ";
   leftView(root->left);
}
