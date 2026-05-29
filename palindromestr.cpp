#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter string:";
    cin>>str;
    string temp=str;
    string rev="";
    for(int i=str.size()-1;i>=0;i--){
        rev=rev+str[i];
    }
    if(temp == rev){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}