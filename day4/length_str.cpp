#include<bits/stdc++.h>
using namespace std;

int length(string s){
    int count=0;
    stringstream ss(s);
    string word,res;
    while(ss>>word){
        res=word;
    }
    count=res.size();
    return count;
}

int main(){
    string s="hello world";
    cout<<length(s);
    return 0;
}