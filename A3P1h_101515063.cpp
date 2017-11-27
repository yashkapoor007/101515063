#include<bits/stdc++.h>
#include"Node.cpp"
using namespace std;
Node* insertNth(Node* head, int data, int position) {

    Node* newNode = new Node(data);
    if(position==0)
    {newNode->next = head;head=newNode;}

    else{
    Node* runner = head;
    for (int i = 0; i < position-1; ++i) {
        runner = runner->next;
    }
    newNode->next = runner->next;
    runner->next = newNode;
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
  head=insertNth(head,100,5);
  head=insertNth(head,-100,0);
  print(head);
}
