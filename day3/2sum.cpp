#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    int n=nums.size();
    int left=0;
    int right=n-1;
    int sum=0;
    while(left<=right){
        for(int i=0;i<n;i++){
            sum=nums[left]+nums[right];
            if(sum==target){
                cout<<"Left and Right indices are:"<<left+1<<" and "<<right+1<<endl;
                return 0;
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}