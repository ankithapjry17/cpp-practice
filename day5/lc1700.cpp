#include<bits/stdc++.h>
using namespace std;

int burger(queue<int> ppl, queue<int> food){
    int cnt[2] = {0,0};

    while(!ppl.empty()){
        cnt[ppl.front()]++;
        ppl.pop();
    }

    while(!food.empty()){
        int f = food.front();
        food.pop();

        if(cnt[f] > 0)
            cnt[f]--;
        else
            return cnt[0] + cnt[1];
    }

    return cnt[0] + cnt[1];
}

int main(){
    int n;
    cin >> n;

    queue<int> ppl, food;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ppl.push(x);
    }

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        food.push(x);
    }

    cout << burger(ppl, food);

    return 0;
}


// int burger(queue<int>ppl,queue<int>food){
//     int cnt[2]={0,0};
//     for(auto p:ppl){
//         cnt[p]++;
//     }
//     for(auto f:food){
//         if(cnt[f] == 0)break;
//         cnt[f]--;
//     }
//     return cnt[0]+cnt[1];
// }

