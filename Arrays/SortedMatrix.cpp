/*
Given an N*N matrix (sorted row wise and column wise), print elements in sorted fashion.
*/

#include <iostream>
#include<vector>
#include<queue>
using namespace std;

typedef pair<int,pair<int,int>> P;

int main() {

    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        
        int N;
        cin>>N;
        int **arr=new int*[N];
        for(int i=0;i<N;i++){
            arr[i]=new int[N];
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        
        priority_queue<P,vector<P>,greater<P>> Q;
        
        for(int j=0;j<N;j++){
            P temp;
            temp.first=arr[j][0];
            temp.second.first=j;
            temp.second.second=0;
            Q.push(temp);
        }
        
            while(!Q.empty()){
                
                cout<<Q.top().first<<" ";
                int x=Q.top().second.first;
                int y=Q.top().second.second;
                Q.pop();
                if(x<N && y+1<N){
                    P temp;
                    temp.first=arr[x][y+1];
                    temp.second.first=x;
                    temp.second.second=y+1;
                    Q.push(temp);
                }
            }
            cout<<endl;  
        }
      
    }



