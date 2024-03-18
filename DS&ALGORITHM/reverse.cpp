#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;//calculating the last digit
        reverse=(reverse*10)+lastdigit;
        n=n/10;   //removing the last digit
    }
    cout<<reverse;
    return 0;
}