#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    stringstream ss(s);
    string curr="",ans="";
    while(ss>>curr){
        if(ans == "")ans=curr;
        else ans=curr+" "+ans;
    }
    return ans;
}

int main(){
    string s="hello hello hi";
    cout<<reverse(s);
    return 0;
}