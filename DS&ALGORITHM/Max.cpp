//max in ith ele
#include<bits\stdc++.h>
using namespace std;

int maximum(int arr[],int key,int n){
    key=-1;
    for(int i=0;i<n;i++){
       key=max(key,arr[i]);
       }
       return key;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<maximum(arr,key,n)<<endl;
}