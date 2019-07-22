#include<iostream>
#include<algorithm> 

using namespace std;

bool compare(string a,string b)
{
	return a+b>b+a;
}

int main()
{
	int n;
	cin>>n;
	string num[n];
	for(int i=0;i<n;i++)
		cin>>num[i];
	sort(num,num+n,compare);
	for(int i=0;i<n;i++)
		cout<<num[i];
	return 0;
}
