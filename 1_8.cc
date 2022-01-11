#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
  // Instead of space ,'*' is used to know the exact spaces
  int i,j,k;
  for(i=1;i<=N;i++)
  {
    for(j=N;j>i;j--)
      cout<<"*";
    cout<<i;
    for(j=2;j<i*2-1;j++)
      cout<<"*";
    if(i>1)
      cout<<i;
	cout<<endl;
  }
  for(i=N-1;i>=1;i--)
  {
    for(j=N;j>i;j--)
      cout<<"*";
    cout<<i;
    for(j=2;j<i*2-1;j++)
      cout<<"*";
    if(i>1)
      cout<<i;
    cout<<endl;
  }
}

