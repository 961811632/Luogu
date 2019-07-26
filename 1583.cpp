#include<iostream>
#include<algorithm>

using namespace std;

struct peo
{
	int num;
	int w;
	int d;
}p[20001];

bool cmp(peo a,peo b)
{
	if(a.w!=b.w)
		return a.w>b.w;
	else 
		return a.num<b.num;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int e[11];
	for(int i=1;i<11;i++)
	{
		cin>>e[i];
	} 
	for(int i=0;i<n;i++)
	{
		cin>>p[i].w;
		p[i].num=i+1;
	} 
	
	sort(p,p+n,cmp);

	for(int i=0;i<n;i++)
	{
		p[i].d = i%10+1;
		p[i].w += e[p[i].d];
	} 

	sort(p,p+n,cmp);
	for(int i=0;i<k;i++)
	{
		cout<<p[i].num<<" ";
	} 
}
 
