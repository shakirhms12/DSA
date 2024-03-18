#include<iostream>
using namespace std;
/*
int sum(int n){
    if(n==0){
        return 0;
    }
    int preSum=sum(n-1);
    return n+preSum;
}

int main(){
    cout<<sum(5);
    return 0;
}

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int temp=n*power(n,p-1);
    return temp;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    int fact= n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
*/
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int temp=fib(n-1)+fib(n-2);
    return temp;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}