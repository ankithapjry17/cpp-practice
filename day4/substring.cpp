#include<bits/stdc++.h>//#include<cstring>
using namespace std;

string substr(int start,int end,string s){
    string res="";

    for(int i=start;i<end;i++){
        res += s[i];
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    int start,end;
    cin>>start;
    cin>>end;
    cout<<substr(start,end,s);
    return 0;
}