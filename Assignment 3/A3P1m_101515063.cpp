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
Node* segregate(Node* head)
{
  Node* temp=head;
  std::vector<int> v;
  while(temp!=NULL)
  {
    if(temp->data%2==0)
    v.push_back(temp->data);
    temp=temp->next;
  }
  temp=head;
  while(temp!=NULL)
  {
    if(temp->data%2!=0)
    v.push_back(temp->data);
    temp=temp->next;
  }
  temp=head;
  for(int i=0;i<v.size();i++)
  {
    temp->data=v[i];
    temp=temp->next;
  }
  while(v.size())
  {
    v.pop_back();
  }
  return head;
}
int main()
{
  cout<<"enter the elements"<<endl;
  Node* head=takeInput();
  cout<<"the segregated list is :"<<endl;
  head=segregate(head);
  print(head);
}
