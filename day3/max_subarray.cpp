#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={2,7,11,15,6,3};
    int k=3;
    int n=nums.size();
    int maxSum=0;
    for(int i=0;i<k;i++){
        maxSum += nums[i];
    }
    int windowSum=maxSum;
    for(int i=k;i<n;i++){
        windowSum += nums[i]-nums[i-k];
        maxSum=max(maxSum,windowSum);
    }
    cout<<"Maximum subarray sum is: "<<maxSum<<endl;
    return 0;
}