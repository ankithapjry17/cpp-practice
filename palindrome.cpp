#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    int temp=num;
    int rev=0;
    while(num>0){
        int digit=num%10;
        rev = rev * 10 + digit;
        num /=10;
    }
    if(temp == rev){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}