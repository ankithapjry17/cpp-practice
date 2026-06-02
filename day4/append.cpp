#include<bits/stdc++.h>
using namespace std;

string append(string s1,string s2){
    s1+=s2;
    return s1;
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<append(s1,s2);
    return 0;
}