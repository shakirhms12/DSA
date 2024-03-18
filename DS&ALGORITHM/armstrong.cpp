#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;
    int digit=n;
    while(n>0){
        int number=n%10;
        sum += pow(number,3);
        n=n/10;
    }
    if(sum==digit){
        cout<<"The number is armstrong";
    }
    else{
        cout<<"The number is not armstrong";
    }
}