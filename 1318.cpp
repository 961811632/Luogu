#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int maxn,ans;
	int num[12580];
	int n,left,right;
	cin>>n; 
    
    for(int i=1;i<=n;i++)
	{
        cin>>num[i];
        maxn=max(maxn,num[i]);
    }
    
    for(int j=1;j<=maxn;j++)
	{
        for(int i=2;i<=n-1;i++)
        {
        	if(num[i]>=j)
			{ 
				left=i;
				i=n; 
			}
		}
        for(int i=n-1;i>=2;i--)
        {
        	if(num[i]>=j)
			{ 
				right=i;
				i=1; 
			}
		}
            
        for(int i=left;i<right;i++)
        {
        	if(num[i]<j)
				ans++; 
		}
                
    }
    cout<<ans;
}
