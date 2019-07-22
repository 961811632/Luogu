#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int word[27];

int main()
{
	int max=0;
	char a[105];
	for(int i=0;i<4;i++)
	{
		cin.getline(a,105);
		int n=strlen(a);
		for(int j=0;j<n;j++)
		{
			if(a[j]>='A'&&a[j]<='Z')
				word[a[j]-'A']++;
		}
	}
	for(int i=0;i<26;i++)
		if(word[i]>max)
			max=word[i];
	for(int i=max;i>=1;i--)
	{
		for(int j=0;j<26;j++)
		{
			if(word[j]>=i)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
	for(int i=0;i<26;i++)
		cout<<(char)('A'+i)<<" ";
	return 0;
} 
