#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int ans=0;
	priority_queue <int> q;
	for(int i=0;i<n;i++)
	{
		int water;
		cin>>water;
		q.push(water);
	}
	while(q.top()>ans*a)
	{
		ans++;
		int max = q.top();
		q.pop();
		q.push(max-b);
	}
	cout<<ans;
	return 0;
 } 
