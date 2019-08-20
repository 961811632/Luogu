#include<iostream>

using namespace std;

int main()
{
	int h,k;
	cin>>h>>k;
	long long num=k+1;
	for(int i=0;i<h;i++)
	{
		num=num*2;
	}
	cout<<num;

	return 0;
} 
