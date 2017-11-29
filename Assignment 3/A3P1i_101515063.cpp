#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;
void findmid(Node* head)
{
  Node* slow=head;
  Node* fast=head;
  while(fast->next!=NULL&&fast->next->next!=NULL)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  cout<<"mid: "<<slow->data<<endl;
}
Node* takeInput()
{
  Node* head=NULL;
  Node* tail=NULL;
  int data;
  cin>>data;
  while(data!=-1)
  {
    Node* newNode=new Node(data);
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
int main()
{
  cout<<"enter the elements"<<endl;
  Node* head=takeInput();
  findmid(head);
}
