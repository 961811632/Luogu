#include<iostream>

using namespace std;

int num[10] = {6,2,5,5,4,5,6,3,7,6};

int count(int x)
{
	if(x==0)
		return num[0];
    int res=0;
    while(x)
	{ 
		res = res + num[x%10]; 
		x = x / 10; 
	}
    return res;
}

int main()
{
	int n;
	int sum=0;
	cin>>n;
	n=n-4;
	if(n<=8)
	{
		cout<<"0";
		return 0;
	}

	for(int i=0;i<1100;i++)
	{
		for(int j=0;j<1100;j++)
		{
			int k = i + j;
			if(count(i)+count(j)+count(k)==n)
				sum++;
		}
	}	
	cout<<sum<<endl;
	return 0;
} 
