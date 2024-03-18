//binary search on array
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int n,int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (e+s)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n;
    cout<<"Enter the array in sorted order"<<endl;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the key"<<endl;

    cin>>key;
    cout<<binarySearch(array,n,key);
    return 0;
}