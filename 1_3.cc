#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
	int i,j;
	for(i=N-1;i>=0;i--)
	{
		for(j=N-1;j>i;j--)
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
}
