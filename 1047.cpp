#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int L,M;
	cin>>L>>M;
	int a[L+1];
	for(int i=0;i<=L;i++)
	{
		a[i]=1;
	}
	for(int i=0;i<M;i++)
	{
		int s,e;
		cin>>s>>e;
		for(int j=s;j<=e;j++)
			a[j]=0;
	}	
	int sum = 0;
	for(int i=0;i<=L;i++)
	{
		if(a[i]==1)
			sum++;
	}
	cout<<sum;
	return 0;
} 
