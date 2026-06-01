#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={2,2,3,4};
    sort(nums.begin(),nums.end());

    int n=nums.size();
    int count=0;
    for(int hypo=n-1; hypo>=2; hypo--){
        int left=0;
        int right=hypo-1;
        while(left<right){
            if(nums[left]+nums[right]>nums[hypo]){
                count += (right-left);
                right--;
            }else{
                left++;
            }
        }
    }
    cout<<"No.of triplets that make traingle are:"<<count<<endl;
    return 0;
}
    