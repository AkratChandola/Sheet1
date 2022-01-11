#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
	int i,j;
	for(i=N;i>=0;i--)
	{
		for(j=N;j>=i;j--)
			cout<<j;
		cout<<endl;
	}
	for(i=1;i<=N;i++)
	{
		for(j=N;j>=i;j--)
			cout<<j;
		cout<<endl;
	}
}
