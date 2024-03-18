#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int pd=array[1]-array[0];
    int curr=2;
    int ans=2;
    int i=2;
    while(i<n){
        if(pd==array[i]-array[i-1]){
            curr++;
        }else{
            pd=array[i]-array[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}