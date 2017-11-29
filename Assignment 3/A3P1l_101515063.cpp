#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;
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
Node* reverse(Node* head)
{
  Node* current=head;
  Node* prev=NULL;
  Node* next=NULL;
  while(current!=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  return prev;
}
int main()
{
  cout<<"Input the elements"<<endl;
  Node* head=takeInput();
  print(head);
  cout<<"reversed linked list is : "<<endl;
  head=reverse(head);
  print(head);
}
