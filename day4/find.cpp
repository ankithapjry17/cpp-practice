#include<bits/stdc++.h>//#include<cstring>
using namespace std;

int find(string s1,char target){
    int count=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==target){
            count++;
        }
    }
    return count;
}

int main(){
    string s1;
    char target;
    getline(cin,s1);
    cin>>target;
    cout<<find(s1,target);
    return 0;
}