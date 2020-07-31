/*
Snakes and Ladders Problem: IB
*/

int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {

 unordered_map<int,int> ladders,snakes;
    for(int i=0;i<A.size();i++){
        ladders[A[i][0]]=A[i][1];
    }
    for(int i=0;i<B.size();i++){
        snakes[B[i][0]]=B[i][1];
    }
    int ans=INT_MAX;
    queue<pair<int,int>> Q;
    vector<int> visited(101,0);
    //1-current position
    //0-distance
    Q.push({1,0});
    
    while(!Q.empty()){
        
        int currLocation=Q.front().first;
        int distance=Q.front().second;
        Q.pop();
        
        if(visited[currLocation]==1){
            continue;
        }
        visited[currLocation]=1;
        
        if(currLocation==100){
            if(distance<ans){
                ans=distance;
         }
        }
        for(int k=1;k<=6;k++){
            int newLocation=currLocation+k;
            if(currLocation+k<=100){
                if(ladders.find(newLocation)!=ladders.end()){
                    newLocation=ladders[newLocation];
                }
                if(snakes.find(newLocation)!=snakes.end()){
                    newLocation=snakes[newLocation];
                }
                if(visited[newLocation]==0){
                    Q.push({newLocation,distance+1});
                }
            }
        }
        
    }
        if(ans==INT_MAX){
            return -1;
        }
    
    return ans;
}


