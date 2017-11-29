#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;
Node* deleteAtkth(Node* head,int k)
{
  if(head!=NULL)
  {
      Node* temp=head;
      int i=0;
      if(k==0)
      {
        Node* t= head;
        head=head->next;
        delete t;
      }
      while(temp!=NULL&&i<k-1)
      {
        temp=temp->next;
        i++;
      }
      if (temp == NULL || temp->next == NULL)
        return NULL;
      Node* n=temp->next->next;
      delete(temp->next);
      temp->next=n;
  }
  return head;
}
Node* takeInput()
{
  Node* head=NULL;
  Node* tail=NULL;
  int data;
  cin>>data;
  while(data!=-1)
  {
    Node* newNode= new Node(data);
    if(head==NULL)
    {
      head=newNode;
      tail=newNode;
    }
    else
    {
      tail->next=newNode;
      tail=tail->next;
    }
    cin>>data;
  }
  return head;
}
void print(Node* head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    if(temp->next!=NULL)
    cout<<temp->data<<"->";
    else
    cout<<temp->data;
    temp=temp->next;
  }
  cout<<endl;
}
int main()
{
  cout<<"enter the elements"<<endl;
  Node* head=takeInput();//1 2 3 4 5 6 7 -1
  head=deleteAtkth(head,4);
  head=deleteAtkth(head,5);
  print(head);
}
