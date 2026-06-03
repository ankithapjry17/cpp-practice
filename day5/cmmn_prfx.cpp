#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs={"flowers","flow","flight"};
    string res="";
    sort(strs.begin(),strs.end());
    string a=strs[0];
    string b=strs[strs.size()-1];
    for(int i=0;i<a.size();i++){
        if(a[i] == b[i]){
            res +=a[i];
        }
        else{
            break;
        }
    }
    cout<<"Result is: "<<res<<endl;
    return 0;
}