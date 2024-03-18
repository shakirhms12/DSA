/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str1="fam";
    string str2="ily";

    //str1.append(str2);
    str1=str1+str2;
    cout<<str1<<endl;
    cout<<str1[2];
    str2.clear();
    cout<<str2<<endl;
    cout<<str1.compare(str2)<<endl;
    //str1.empty
    //str1.erase(from which index, how many character)
    str1.erase(0,4);
    cout<<str1<<endl;
    //str1.find("ily")return strating index of the string
    cout<<str1.find("ly")<<endl;
    str1.insert(0, "fami");
    //str1.size()
    //str1.length()
    //s1=str1.substr(starting index,no of characters)find sub string
    cout<<str1<<endl;
    string str= "786";
    int x=stoi(str);//string to integer
    cout<<x<<endl;
    cout<<to_string(x)+"9"<<endl;//to_string using to convert int to atr then add by cancatination

    sort(str1.begin(), str1.end());
    cout<<str1<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<(min(n1,min(n2,n3)))<<endl;
    cout<<(max(n1,max(n2,n3)));
    return 0;
}
