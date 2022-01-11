#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
  // Instead of space, '*' is used to know the exact spaces
  int i,j;
  for(i=N;i>=1;i--)
  {
    for(j=N;j>i;j--)
      cout<<"*";
    cout<<(char)(65+i-1);
    for(j=2;j<i*2-1;j++)
      cout<<"*";
    if(i>1)
      cout<<(char)(65+i-1);
    cout<<endl;
  }
}
