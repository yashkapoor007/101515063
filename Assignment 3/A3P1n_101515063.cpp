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
Node* insert(Node* head,int data)
{
  Node* temp=head;
  int flag=0;
      Node* newNode = new Node(data);
  if(temp->data>=data)
  {
    newNode->next=head;
    head=newNode;
  }
  else{
  while(temp->data<=data&&temp->next!=NULL)
    {temp=temp->next;}

        newNode->next=temp->next;
        temp->next=newNode;}
  return head;
}
int main()
{
  cout<<"input the elements"<<endl;
  Node* head=takeInput();
  print(head);
  cout<<"enter the data to be inserted in the sorted list"<<endl;
  int n;
  cin>>n;
  head=insert(head,n);
  print(head);
}
