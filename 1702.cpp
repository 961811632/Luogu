#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	
	int ans=0;
	int max=0;
	for(int k=1;k<=5;k++)
	{
		int num=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==k || b[i]==k)
			{
				num++;
			}
			else
			{
				num=0;
			}
			
			if(num>max)
			{
				max=num;
				ans=k;
			}
		}
	}
	
	cout<<max<<" "<<ans;
	return 0;
} 
