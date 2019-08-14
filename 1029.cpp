#include<iostream>

using namespace std;

int gcd(int a,int b)
{
	if(b!=0)
		return gcd(b,a%b);
	return a;
}


int main()
{
	int x,y;
	cin>>x>>y;
	int sum=0;
	for(int i=1;i*i<x*y;i++)
	{
		if((x*y)%i==0 && gcd(i,(x*y)/i)==x)
			sum++;
	}
	sum = sum*2;
	if(x==y)
		sum++;
	cout<<sum;
	return 0;
} 
