#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main()
{
    int ans = 0;
    int x;
    cin >> x;
    int num = abs(x);
    int max = INT_MAX/10;
    while(num>0)
    {
        int t = num % 10;
        if(ans > max)
            return 0;
        ans = ans * 10 + t;

        num = num / 10;
    }
    if(x>0)
        cout << ans;
    else
        cout << -ans;
    return 0;
} 


