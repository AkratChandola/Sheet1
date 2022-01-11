#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
	int i,j,k;
    for(i=1;i<=N;i++)
    {
        for(j=i;j<N;j++)
        	cout<<" ";
        for(k=2*i-1;k>=1;k--)
            cout<<k;
        cout<<endl;
    }
}
