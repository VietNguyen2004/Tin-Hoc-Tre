#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n < 2)
    {
        cout<<"NONE";
        return 0;
    }

    bool a[n + 1];
    for(int i = 2; i <= n ;i ++)a[i] = true;
    for(int i = 2;i*i <= n; i ++)
    {
        for(int j = i *i ; j <= n; j += i)
        {
            a[j] = false;
        }
    }
    for(int i =2 ;i <= n; i ++)
    {
        if(a[i]) cout<<i<<" ";
    }
}
