#include<iostream>
using namespace std;

int Sum(int n1){
    int sum;
    return sum= n1*(n1+1)/2;
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
}