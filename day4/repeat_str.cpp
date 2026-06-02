#include<bits/stdc++.h>
using namespace std;

bool repeatSubstr(string s){//if s=abab
    string doubled=s+s;//abababab/0
    string trimmed=doubled.substr(1,doubled.size()-1);//abababab
    if(trimmed.find(s) != string::npos) 
        return true;
    else
        return false;
}




int main(){
    string s="abababab";
    cout<<repeatSubstr(s);
    return 0;
}