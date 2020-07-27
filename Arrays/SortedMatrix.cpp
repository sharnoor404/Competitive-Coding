/*
Given an N*N matrix (sorted row wise and column wise), print elements in sorted fashion.
*/
#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {

    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        
        int N;
        cin>>N;
        priority_queue<int,vector<int>,greater<int>> Q;
        
        for(int j=0;j<N;j++){
            int x;
            cin>>x;
            Q.push(x);
        }
        for(int j=N;j<N*N;j++){
            cout<<Q.top()<<" ";
            Q.pop();
            int x;
            cin>>x;
            Q.push(x);
        }
        
        while(!Q.empty()){
            cout<<Q.top()<<" ";
            Q.pop();
        }
      cout<<endl;  
    }


}
