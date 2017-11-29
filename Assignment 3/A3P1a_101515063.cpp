#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;
Node* takeInput()
{
  int data;
  cin>>data;
  Node* head=NULL;
  Node* tail=NULL;
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
  Node* head=takeInput();
  print(head);
}
