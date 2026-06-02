#include<bits/stdc++.h>//#include<cstring>
using namespace std;

string substr(int start,int end,string original_str){
    string res;

    for(int i=start;i<end-1;i++){
        res += original_str[i];
    }
}

int main(){
    string name;
    string dept;
    string Class;

    cout<<"Enter the name,dept and class:"<<endl;
    getline(cin,name);
    getline(cin,dept);
    getline(cin,Class);
    cout<<name<<" "<<dept<<" "<<Class;
    return 0;
}