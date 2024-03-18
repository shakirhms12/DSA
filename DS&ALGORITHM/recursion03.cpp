#include<iostream>
#include<string>
using namespace std;
/*
int reverse(string s){
    if(s.length()==0){
        return 0;
    }

    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){
    string str="BINOD";
    reverse(str);
    return 0;
}


int putPI(string s){
    if(s.length()==0){
        return 0;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<3.14;
        string pi=s.substr(2);
        putPI(pi);
    }
    else{
        cout<<s[0];
        string pi=s.substr(1);
        putPI(pi);
    }
}

int main(){
    string str="pippxxppiixipi";
    putPI(str);
    return 0;
}


string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main(){
    string str="aaaabbbbcccc";
    cout<<removeDup(str);
    return 0;
}


string removeAllX(string s){
    if(s.length()==0){
        return " ";
    }

    char ch=s[0];
    string ans=removeAllX(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return (ch+ans);
}

int main(){
    cout<<removeAllX("axxbdxcefxhix");
    return 0;
}
*/

void subStr(string s,string ans){
    if(s.length()==0){
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subStr(ros,ans);
    subStr(ros,ans+ch);
}
int main(){
    subStr("ABC","");
    cout<<endl;
    return 0;
}