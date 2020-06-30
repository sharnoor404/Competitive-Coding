/*
Rahul Counting Trees Problem
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
    
int main() {
    
    int N,K,ans=0;
    cin>>N>>K;
    long long int* nodes=new long long int[N+1];
    long long int* parent=new long long int[N+1];
    
    for(int i=1;i<=N;i++){
        cin>>nodes[i];
    }
    for(int i=2;i<=N;i++){
        cin>>parent[i];
    }
    
    bool ancestors[N+1][N+1];
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            ancestors[i][j]=false;
        }
    }
    int root=1;//given
    for(int i=2;i<=N;i++){
        int x=i;
        while(x!=root){
            x=parent[x];
            ancestors[x][i]=true;
        }   
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            for(int k=1;k<=N;k++){
                    if(i!=j && j!=k && i!=k && ancestors[i][j] && ancestors[i][k] && ((nodes[i]+nodes[j]+nodes[k])>=K)){
                        ans++;
                    }
            }
        }
    }
    
    cout<<ans/2;
}



