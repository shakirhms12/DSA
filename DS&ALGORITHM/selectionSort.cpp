#include<bits\stdc++.h>
using namespace std;

int main(){
   
    int arr[5]={23,12,34,10,14};
    
    for(int i=0;i<5-1;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
            }
 
        }

    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}