#include<iostream>
 
using namespace std;

int main()
{
	int n, k;
	int f[100001] = { 0 };
	cin>>n>>k;
	f[0]=1;
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=k;j++) 
		{
			if(i>=j)
			{
				f[i] += f[i-j];
				f[i] = f[i]%100003;
			}
		}
	}
	cout<<f[n];
    return 0;
}
