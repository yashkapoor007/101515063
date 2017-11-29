#include<bits/stdc++.h>
#include "BST.cpp"
using namespace std;
BST* insert(BST* root,int data)
{
  if(root==NULL)
  {
    return (new BST(data));
  }
  else
  {
    if(root->data<data)
    root->right=insert(root->right,data);
    else if(root->data>data)
    root->left=insert(root->left,data);
    return root;
  }
}
BST* createBST()
{
  BST* root=NULL;
  int data;
  cin>>data;
  while(data!=-1)
  {
    if(root==NULL)
    root=insert(root,data);
    else
    insert(root,data);
    cin>>data;
  }
  return root;
}
void inorder(BST *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
 }
// int maximum(BST* root)
// {
//   if(root->right==NULL)
//   return root->data;
//   maximum(root->right);
// }
BST* minimum(BST* root)
{
  if(root->left==NULL)
  return root;
  minimum(root->left);
}
BST * inOrderSuccessor(BST *root, BST *n)
{
    // step 1 of the above algorithm
    if( n->right != NULL )
        return minimum(n->right);

    BST *succ = NULL;

    // Start from root and search for successor down the tree
    while (root != NULL)
    {
        if (n->data < root->data)
        {
            succ = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
           break;
    }

    return succ;
}
//10 20 20 10 5 4 3 2 1 -1
int main()
{
  cout<<"enter the elements :"<<endl;
  BST* root=createBST();
    inorder(root);
    BST* temp=root->left->left;
  BST*  succ =  inOrderSuccessor(root, temp);
  if(succ !=  NULL)
    printf("\n Inorder Successor of %d is %d ", temp->data, succ->data);
  else
    printf("\n Inorder Successor doesn't exit");

    // cout<<"the maximum data is :"<<endl;
    // int max=maximum(root);
    // cout<<max<<endl;
    // int min=minimum(root);
    // cout<<"the minimum data is :"<<endl;
    // cout<<min<<endl;
}
