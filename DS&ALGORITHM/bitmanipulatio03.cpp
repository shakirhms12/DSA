#include<iostream>
using namespace std;
int uniqueNo(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];

    }
    return xorsum;
}
int main(){
    int arr[7]={7,5,4,7,4,2,5};
    cout<<uniqueNo(arr,7);
    return 0;

}