//Butterfully pattern
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            cout<<'*';
        }
        int space = 2*n - 2*i;
        for(j=0;j<space;j++)
        {
              cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
        int j;
        for(j=0;j<i;j++)
        {
            cout<<'*';
        }
        int space = 2*n - 2*i;
        for(j=0;j<space;j++)
        {
              cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
} 