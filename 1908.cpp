#include<iostream>

using namespace std;

int n,now[500010],next[500010];
long long sum=0;

void merge(int l,int r)
{
	if(l==r)
		return;
	int mid=(l+r)/2;
	
	merge(l,mid);
	merge(mid+1,r);


	int left=l,right=mid+1,count=l;
	while(left<=mid&&right<=r)
	{
		if(now[left]<=now[right])
		{
			next[count]=now[left];
			left++;
			count++;
		}
		else
		{			
			next[count]=now[right];
			count++;
			right++;
			sum+=mid-left+1;
		}
	}
	while(left<=mid) 
	{
		next[count]=now[left];
		count++;
		left++;
	}
	while(right<=r) 
	{
		
		next[count]=now[right];
		right++;
		count++;
	}

	for(int i=l;i<=r;i++)
	{
		now[i]=next[i];
	}

}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>now[i];
	}

	merge(0,n-1);
	cout<<sum;
	
	return 0;
}
