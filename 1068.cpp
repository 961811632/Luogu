#include<iostream>
#include<algorithm>

using namespace std;

struct peo
{
	int num;
	int score;
}a[9001];

bool cmp(peo x,peo y)
{
	if(x.score == y.score)
		return (x.num < y.num);
	else
		return (x.score > y.score);
}

int main()
{
	int m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].num>>a[i].score;
	}
	sort(a,a+n,cmp);
	int line = m*1.5;
	while(a[line-1].score==a[line].score&&line<=n)
	{
		line++;
	}
	cout<<a[line-1].score<<" "<<line<<endl;
	for(int i=0;i<line;i++)
	{
		cout<<a[i].num<<" "<<a[i].score<<endl;
	}
	return 0;
} 
