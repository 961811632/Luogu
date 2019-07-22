#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	char a[2600];
	int ans = 0;
	while(true)
	{
		char c = getchar();
		if(c=='W'||c=='L')
		{
			a[ans]=c;
			ans++;
		}
		if(c=='E')
			break;
	}
	int w=0;
	int l=0;
	for(int i=0;i<ans;i++)
	{
		if(a[i]=='W')
			w++;
		if(a[i]=='L')
			l++;
		if((w>=11||l>=11)&&(abs(w-l)>=2))
		{
			cout<<w<<":"<<l<<endl;
			w=0;
			l=0;
		}
		else if(i==ans-1)
			cout<<w<<":"<<l<<endl;
	}
	if(w==0&&l==0)
		cout<<w<<":"<<l<<endl;
	cout<<endl;
	w=0;
	l=0;
	for(int i=0;i<ans;i++)
	{
		if(a[i]=='W')
			w++;
		if(a[i]=='L')
			l++;
		if((w>=21||l>=21)&&abs(w-l)>=2)
		{
			cout<<w<<":"<<l<<endl;
			w=0;
			l=0;
		}
		else if(i==ans-1)
			cout<<w<<":"<<l<<endl;
	}
	if(w==0&&l==0)
		cout<<w<<":"<<l<<endl;
	return 0;
} 
