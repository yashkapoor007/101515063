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
void find(Node* head, int data)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    if(temp->data==data)
    {cout<<"the searched key is found"<<endl;break;}
    temp=temp->next;
  }
  if(temp==NULL)
  cout<<"the key was not found"<<endl;
}
int main()
{
  cout<<"enter the elements"<<endl;
  Node* head=takeInput();
  int data;
  cout<<"enter the key to be searched"<<endl;
  cin>>data;
  find(head,data);
}
