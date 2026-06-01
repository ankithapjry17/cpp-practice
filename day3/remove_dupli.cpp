#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,2,2,3,3,4,4,4,5,5,9,10};
    int n=nums.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(nums[j]!=nums[i]){
            i++;
            nums[i]=nums[j];
        }
    }
    cout<<"Total unique elements:"<<i+1<<endl;
    for(int i:nums)
        cout<<i<<" ";
    return 0;
}