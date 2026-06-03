#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter no.of elements:";
    cin>>n;
    vector<int>height(n);
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int left=0;
    int right=n-1;
    int maxWater=0;
    while(left<right){
        int h=min(height[left],height[right]);
        int w=right-left;
        int a=h*w;
        maxWater=max(maxWater,a);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"Maximum water is:"<<maxWater<<endl;
    return 0;
}