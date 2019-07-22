//1-3-7-15-31-62-125-250-500-1000
//499-(999)1000
#include<iostream>

using namespace std;

int main()
{
	int n, f[1024];
    cin>>n;
    f[0] = 1;
	f[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(i%2==0)
            f[i] = f[i/2]+f[i-1];
        else
            f[i] = f[i-1];
    }
    cout<<f[n];
    return 0;
}
