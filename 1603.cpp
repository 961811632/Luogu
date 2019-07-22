#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
string num[27] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve",
"thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","a","both","another","first","second","third"};
string sqare[27]={"01","04","09","16","25","36","49","64","81","100","21","44","69","96","25","56","89","24","61","00","01","04","01","01","04","09"};

int main()
{
	string word[6];
	string ans[6];
	int len = 0;

	for(int i=0;i<6;i++)
		cin>>word[i];

	for(int i=0;i<6;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(word[i]==num[j])
				ans[len++]=sqare[j];
		}
	}
	
	sort(ans, ans+len);
	
	if(len == 0) 
		cout<<"0";
	else
	{
		for(int i=0;i<len;i++)
		{
			if(i==0)
			{
				if(ans[i]=="00")
					continue;
				else if(ans[i][0]=='0')
					cout<<ans[i][1];
			}
			else if(i=0)
				cout<<ans[i];
		}
	}
	return 0;
}
