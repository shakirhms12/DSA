#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<(min(n1,min(n2,n3)));
    cout<<(max(n1,max(n2,n3)));
    return 0;
}