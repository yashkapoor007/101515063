#include<bits/stdc++.h>
using namespace std;
int isDigit(char c)
{
  if(c>=48&&c<=57)
  return 1;
  return 0;
}
int isoperator(char c)
{
  if(c>=42&&c<=47)
  return 1;
  return 0;
}
int postfix(char arr[])
{
  stack<int> s;
  int a,b;
  for(int i=0;arr[i]!='\0';i++)
  {
    if(isDigit(arr[i]))
    s.push(arr[i]-'0');

    else if(isoperator(arr[i]))
    {
      a=s.top();
      s.pop();
      b=s.top();
      s.pop();
      switch (arr[i]) {
        case '+':
        s.push(a+b);
        break;
        case '-':
        s.push(a-b);
        break;
        case '*':
        s.push(a*b);
        break;
        case '/':
        s.push(a/b);
        break;
        case '^':
        s.push(pow(a,b));
        break;
      }
    }
  }
  return s.top();
}
int main()
{
  char arr[100];
  cout<<"enter the number to be calculated"<<endl;
  cin>>arr;
  int x=postfix(arr);
  cout<<x<<endl;
}
