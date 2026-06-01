#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5,9};
    int n=arr.size();
    int k; 
    cin>>k;
    k=k % n;
    auto a=arr.begin();
    reverse(a,a+k);
    reverse(a+k,a+n);
    reverse(a,a+n);
    for(int i:arr)
        cout<<i<<" ";
    return 0;
}

// or

// k = k % n;

//     reverse(arr.begin(), arr.begin()+k);
//     reverse(arr.begin()+k, arr.end());
//     reverse(arr.begin(), arr.end());

//     for(int i:arr)
//         cout<<i<<" ";