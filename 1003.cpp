#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[10001],b[10001],c[10001],d[10001];
	int ans;
	int x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	cin>>x>>y;
	
	bool flag=false;
	for(int i=n;i>0;i--)
	{
		if(a[i]<=x&&a[i]+c[i]>=x&&b[i]<=y&&b[i]+d[i]>=y)
		{
			ans=i;
			flag=true;
			break;
		}
	}
	
	if(flag)
		cout<<ans;
	else
		cout<<"-1";
}
