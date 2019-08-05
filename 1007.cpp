#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int l,n;
	cin>>l>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int mintime=0;
	for(int i=0;i<n;i++)
	{
		mintime = max(mintime,min(a[i],l+1-a[i]));
	}
	
	int maxtime=0;
	for(int i=0;i<n;i++)
	{
		maxtime = max(maxtime,max(a[i],l+1-a[i]));
	}
	
	cout<<mintime<<" "<<maxtime;
	return 0;
} 
