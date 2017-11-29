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
void max_min(Node* head)
{
  Node* temp=head;
  int max=INT_MIN;
  int min=INT_MAX;
  while(temp!=NULL)
  {
    if(temp->data>max)
    max=temp->data;
    if(temp->data<min)
    min=temp->data;
    temp=temp->next;
  }
  cout<<"maximum: "<<max<<" minimun: "<<min<<endl;
}
int main()
{
  cout<<"enter the elements"<<endl;
  Node* head=takeInput();
  max_min(head);
}
