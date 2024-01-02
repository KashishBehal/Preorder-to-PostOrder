class Solution{
public:
void Bst(Node* &root , int data){
    if(root==NULL){
        root=newNode(data);
        return;
    }
    if(root->data>data)
        {
   Bst(root->left,data);
        }
        else
        { Bst(root->right,data);
        }
}
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int n)
    {
         Node *root=NULL;
         for(int i=0;i<n;i++)
          {
               Bst(root,pre[i]);
          }
        return root;
    }
};
