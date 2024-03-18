#include<bits/stdc++.h>
using namespace std;

int binary_decimal(int n1){
    int sum=0;
    int i = 0;
    while(n1>0){
     int lastdig=n1%10;
        sum=sum+lastdig*pow(2,i);
        i++;
        n1=n1/10;
    }
    return sum;
}

int decimal_binary(int n1){
    int digit;
    int i;
    while(n1>0){
    int lastdig=n1%2;
    digit=digit*10+lastdig;
    n1=n1-lastdig;
    }
    return digit;
}

int main(){
    int n, choice;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the type of conversion"<<endl;
    cout<<"1.Binary to decimal"<<endl;
    cout<<"2.Decimal to Binary"<<endl;
    cout<<"3.Oct to decimal"<<endl;
    cout<<"4.Decimal to oct"<<endl;
    cout<<"5.Hexa to decimal"<<endl;
    cout<<"6.Decimal to hexa"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        cout<<binary_decimal(n);
        break;
        case 2:
        cout<<decimal_binary(n);
         
    }
}