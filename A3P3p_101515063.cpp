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
}//10 20 20 10 5 4 3 2 1 -1
int main()
{
  cout<<"enter the elements :"<<endl;
  BST* root=createBST();
    inorder(root);
}
