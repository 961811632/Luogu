#include<iostream> 

using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
	int num=0;
	for(long long i=n;i<=m;i++)
	{
		if(i%4==0||i%2!=0)
		{
			num++;
		}
	}
	cout<<num;
	return 0;
}
