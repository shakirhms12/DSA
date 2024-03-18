//rectangle pattern
#include<iostream>
using namespace std;

int main()
{
    int row, coloumn;
    cin>>row>>coloumn;
    int i;
    for(i=0;i<row;i++)
    {
       for(int j=0;j<coloumn;j++)
       {
        cout<<'*';
       }
       cout<<endl;
    }
}