#include<bits/stdc++.h>
using namespace std;

int pytriplet(int x1,int y1,int z1){
    int a = max(x1,max(y1,z1));
    int b, c;

    if(a == x1){
        b=y1;
        c=z1;
    }else if(a==y1){
        b=x1;
        c=z1;
    }else{
        b=x1;
        c=y1;
    }
    
    if(a*a==((b*b)+(c*c))){
        return true;
    }else{
        return false;
    }
}
int main(){
    int x, y, z;
    cin>>x>>y>>z;
    //cout<<pytriplet(x, y, z);
    if(pytriplet(x,y,z)==true){
        cout<<"The number is pythgorian Triplet";
    }else{
        cout<<"The number is not pythgorian Triplet";
    }
    return 0;
}
