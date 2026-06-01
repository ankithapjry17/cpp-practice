#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,3,3};
    int target=2;
    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            cout<<"Target found"<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}

// or

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[3]={1,2,3};
//     int target=2;

//     bool found=false;

//     for(int i=0;i<3;i++){
//         if(arr[i]==target){
//             found=true;
//             break;
//         }
//     }

//     if(found)
//         cout<<"Target found";
//     else
//         cout<<"Not found";

//     return 0;
// }