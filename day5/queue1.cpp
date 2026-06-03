#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        vector<int>v;
        int size;
        void push(int i){
            v.push_back(i);
            size++;
        }
        void pop(){
            v.erase(v.begin());
        }

        void display(){
            for(int i=0;i<v.size();i++){
                cout<<v[i];
            }
        }
};

int main(){


    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.display();
    return 0;
}


