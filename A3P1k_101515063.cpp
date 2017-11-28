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
int length(Node* head)
{
  int i=0;
  Node* temp=head;
  while(temp!=NULL)
  {i++;temp=temp->next;}
  return i;
}
Node* sort(Node* head)
{
  int N=length(head);
  Node* temp=head;
  Node* temp1=head;
  for(int i=0;i<N-i;i++)
  {
    temp=head;
    for(int j=0;j<N-i-1;j++)
    {
      if(temp->data>temp->next->data)
      {
        int data=temp->data;
        temp->data=temp->next->data;
        temp->next->data=data;
      }
      temp=temp->next;
    }
  }
  return head;
}//1 2 3 1 2 3 1 2 3 -1
int main()
{
  cout<<"Input the elements"<<endl;
  Node* head=takeInput();
  print(head);
  head=sort(head);
  cout<<"the sorted elements are:"<<endl;
  print(head);
}
