#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

//质数 
bool isPrime(int i)
{
    for (int j = 2; j <= sqrt(i); j++)
        if (i % j == 0) 
            return false;
    return true;
}

//回文 
bool isHui(int s)
{
	if((s>=1000 && s<10000)|| (s>=100000 && s<1000000) || (s>=10000000 && s<100000000))
		return false;
    
	int a[10],i=0;
	while(s>0)
	{
		a[i]=s%10;
		s=s/10;
		i++;
	}
	for(int j=0;j<i/2+1;j++)
	{
		if(a[j]!=a[i-j-1])
			return false;
	}
    return true;
}
    
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
			continue;
		if(isHui(i) &&isPrime(i))
			cout<<i<<endl;
	}
	return 0;
}
  
