#include<iostream>
#include<queue>
using namespace std;

int M,N;
int a[1005],ans;
bool book[1005];
queue<int> q;

int main()
{
	cin>>M>>N;
	ans=0;
	for(int i=0;i<N;i++)
		cin>>a[i];
	
	for(int i=0;i<N;i++)
	{
		if(book[a[i]])
			continue;
			
		else
		{
			if(q.size()<M)
			{
				q.push(a[i]);
				ans++;
				book[a[i]]=true;
			}
			else
			{				
				ans++;				
				book[a[i]]=true;
				book[q.front()]=false;
				q.push(a[i]);
				q.pop();
			}
		}
	}
	
	cout<<ans<<endl;
} 
