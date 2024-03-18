#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int arr1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cin>>arr1[i][j];
        }
    }

    int arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cin>>arr2[i][j];
        }
    }
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                arr[i][j]=arr1[i][k]*arr2[k][j];
            }
        }
            cout<<endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cin>>arr[i][j];
    }
    return 0;
}