#include<iostream>

using namespace std;


int main()
{
	int a,n,m,x,t;
	
	cin>>a>>n>>m>>x;
    int s[n];
    s[1]=1;
	s[2]=1;
    for(int i=3;i<=n;i++)
     s[i]=s[i-1]+s[i-2];
     
    t=(m-(s[n-3]+1)*a)/(s[n-2]-1);
    cout<<(s[x-2]+1)*a+(s[x-1]-1)*t;

    return 0;
}
