#include<iostream>
using namespace std;
/*
void dec(int n){
   if(n==0){
      return;
   }
   cout<<n<<endl;
   dec(n-1);
}
void inc(int n){
   if(n==0){
      return;
   }
   inc(n-1);
   cout<<n<<endl;
}

int main(){
   int n;
   cin>>n;
   dec(n);
   inc(n);
}


int firstoccurance(int arr[],int n,int i,int key){
   if(i==n){
      return -1;
   }
   if(arr[i]==key){
      return i;
   }
   return firstoccurance(arr,n,i+1,key);
}
int lastoccurance(int arr[],int n,int i,int key){
   if(i==n){
      return -1;
   }
   int restarr=lastoccurance(arr,n,i+1,key);
   if(restarr!=-1){
      return restarr;
   }
   if(arr[i]==key){
      return i;
   }
   return -1;
}

int main(){
   int arr[]={1,2,3,4,5,2,7,8};
   cout<<firstoccurance(arr,7,0,2)<<endl;
   cout<<lastoccurance(arr,7,0,2);
   return 0;
}
*/
int revstr(int str01)