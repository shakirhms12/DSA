#include<iostream>
using namespace std;

int fact(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        int fab=1;
        for (int i = 2; i <= number; i++)
        {
            fab = fab * i;
        }
        return fab;
    }
}

int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
}