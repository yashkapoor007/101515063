#include<bits/stdc++.h>
using namespace std;
int isOperand(char c)
{
  if(c>='a' && c<='z'||c>='A'&&c<='Z')
  return 1;
  return 0;
}
int prec(char c)
{
  switch (c) {
    case '+':
    case '-':
    return 1;
    case '*':
    case '/':
    return 2;
    case '^':
    return 3;
  }
  return -1;
}//a+b*(c^d-e)^(f+g*h)-i
void infixtopostfix(char arr[])
{
  stack<char> s;
  string output="";
  for(int i=0;arr[i]!='\0';i++)
  {
    if(isOperand(arr[i]))
    {
      output=output+arr[i];
      // cout<<output<<endl;
    }
    else if(arr[i]=='(')
    s.push(arr[i]);
    else if(arr[i]==')')
    {
      while(!s.empty()&&s.top()!='(')
      {
        output+=s.top();
        s.pop();
      }
      if(!s.empty()&&s.top()!='(')
      {
        cout<<"invalid expression"<<endl;
        break;
      }
      else
      s.pop();
    }
    else
    {
      while(!s.empty()&&prec(arr[i])<=prec(s.top())&&prec(arr[i])!=-1)
      {
        output+=s.top();
        s.pop();
      }
      s.push(arr[i]);
    }
  }
  while(!s.empty())
  {
    output+=s.top();
    // cout<<output<<endl;
    s.pop();
  }
  cout<<output<<endl;
}
int main()
{
  cout<<"enter the infix equation"<<endl;
  char arr[100];
  cin>>arr;
  infixtopostfix(arr);
}
