#include<bits/stdc++.h>
#define N 6
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=N-1;j>i;j--)
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<"* ";
		cout<<endl;
	}
	for(i=N-2;i>=0;i--)
	{
		for(j=N-1;j>i;j--)
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<"* ";
		cout<<endl;
	}
}
