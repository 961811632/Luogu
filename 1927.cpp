#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n],y[n];
	double len[n][n],minlen[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			len[i][j]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
        	minlen[i]=max(minlen[i],len[i][j]);
		}
	}
	
	double min=30000;
	for(int i=0;i<n;i++)
	{
		if(minlen[i]<min)
			min=minlen[i];
	}
	
	double ans=min*min*3.1415926535;
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<ans;
	return 0;
} 
