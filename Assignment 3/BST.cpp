class BST
{
public:
  BST *left;
  BST *right;
  int data;
  BST(int data)
  {
    left=NULL;
    right=NULL;
    this->data=data;
  }
};
