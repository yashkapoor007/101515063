#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;
Node* insertAtend(Node* head,int data)
{
  Node* newNode= new Node(data);
  Node* temp=head;
  if(head==NULL)
  head=newNode;
  else
  {
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newNode;
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
  Node* head=takeInput();
  head=insertAtend(head,10);
  head=insertAtend(head,20);
  print(head);
}
