//linear search in array
#include<bits/stdc++.h>
using namespace std;

int linaerSearch(int array[],int n,int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
          return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    
    cin>>key;
    cout<<linaerSearch(array,n,key);
    return 0;
}