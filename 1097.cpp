#include<iostream>
#include<map>
#include<set>

using namespace std;

int main() 
{
    map <int,int> newmap;
    set <int> newset;
    int n,number;
    cin>>n;
    for(int i=1; i<=n; i++) 
	{
        cin>>number;
        newmap[number]++;
        newset.insert(number);
    }
    set<int>::iterator iter;
    for(iter=newset.begin(); iter!=newset.end(); iter++)
        cout<<*iter<<" "<<newmap[*iter]<<endl;
}
