#include<bits/stdc++.h>
using namespace std;

int lengthOfSubString(string s){
    vector<int> charFrequency(128,0);
    int left=0;
    int maxLength=0;
    for(int right=0;right<s.size();right++){
        char currentChar=s[right];
        charFrequency[currentChar]++;
        while(charFrequency[currentChar]>1){
            charFrequency[s[left]]--;
            left++;
        }
        maxLength=max(maxLength,right-left+1);
    }
    return maxLength;
}

int main(){
    string s="abcdabcc";
    cout<<lengthOfSubString(s);
    return 0;
}