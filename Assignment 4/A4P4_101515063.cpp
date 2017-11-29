#include <bits/stdc++.h>
using namespace std;
void lcs(char a[],char b[],int n,int m)
{
  int l[n+1][m+1];
  for(int j=0;j<=m;j++)
  {
    for(int i=0;i<=n;i++)
    {
      if(i==0||j==0)
      l[i][j]=0;
      else if(a[i-1]==b[j-1])
      l[i][j]=1+l[i-1][j-1];
      else
      l[i][j]=max(l[i-1][j],l[i][j-1]);
    }
  }//AGGTAB GXTXAYB
  int maxlength=l[n][m];
  char lcseq[maxlength+1];
  lcseq[maxlength]='\0';
  int i=n,j=m;
  while(i>0&&j>0)
  {
      if(b[j-1]==a[i-1])
      {
      lcseq[maxlength-1]=a[i-1];
      i--;
      j--;
    maxlength--;}
    else if(l[i][j-1]<l[i-1][j])
    i--;
    else
    j--;
    }
  cout<<lcseq<<endl;
}
int main()
{
  char a[1000];
  char b[1000];
  cout<<"enter the 1st string"<<endl;
  cin>>a;
  int n=strlen(a);
  cout<<"enter the second string"<<endl;
  cin>>b;
  int m=strlen(b);
  lcs(a,b,n,m);
}
