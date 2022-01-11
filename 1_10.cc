#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
  // Instead of space ,'*' is used to know the exact spaces
  int i,j,k=3;
  for(i=1;i<=2;i++)
  {
    for(j=1;j<i;j++)
      cout<<"*";
    cout<<i;
    for(j=k;j>0;j--)
      cout<<"*";
    k=k-2;
    cout<<i;
    cout<<endl;
  }
  k=3;
  for(i=3;i<=N;i++)
  {
    for(j=N;j>i;j--)
      cout<<"*";
    cout<<i;
    if(i>3)
    {
    	for(j=k;j<=3;j++)
      		cout<<"*";
      	cout<<i;
      	k=k-2;
	}
	cout<<endl;
  }
}

