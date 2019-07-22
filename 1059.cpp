#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s;
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int t;
		cin>>t;
		s.insert(t);
	}
	cout<<s.size()<<endl;
	set<int>::iterator iter=s.begin();
	while(iter!=s.end()){
		cout<<*iter++<<' ';
	}
} 
