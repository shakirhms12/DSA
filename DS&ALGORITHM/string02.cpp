//max sequence of characters from a given sequence
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="52314";
    /*
    int count=0;
    while(count<str.size()){
        for(int i=0;i<str.size();i++){
        if(str[i]<str[i+1]){
            int temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    count+=1;
    }
    cout<<str<<endl;*/
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
}