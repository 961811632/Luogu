#include<iostream>
#include<algorithm>
using namespace std;

struct stu
{
	int num;
	int c;
	int m;
	int e;
	int score;
}s[301];

bool cmp(stu a,stu b)
{
	if(a.score!=b.score)
	{
		return a.score>b.score;
	}
	else if(a.c!=b.c)
	{
		return a.c>b.c;
	}
	else
	{
		return a.num<b.num;
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].num=i+1;
		cin>>s[i].c>>s[i].m>>s[i].e;
		s[i].score=s[i].c+s[i].m+s[i].e;
	}
	sort(s,s+n,cmp);	
	for(int i=0;i<5;i++)
	{
		cout<<s[i].num<<" "<<s[i].score<<" "<<endl;
	}
	return 0;
}
