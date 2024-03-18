#include<iostream>
using namespace std;
/*int main(){
    int n;
    cin>>n;
    cout<<(n&1)<<endl;//1-->0dd,0-->even

    int n;
    cin>>n;

    int count=0;
    while(n){
        n=n&n-1;//gives the number of ones
        count+=1;
    }
    cout<<count;
}*/
int subSet(int arr[],int n){
    for(int i=0;i<(1<<n);i++){//1<<n-->2^n
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<(i&(i<<j))<<" ";
                //cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
   }
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subSet(arr,n);
    return 0;
}
