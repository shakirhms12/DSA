//half pyramid
#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(j<(row-1)-i)
            {
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}