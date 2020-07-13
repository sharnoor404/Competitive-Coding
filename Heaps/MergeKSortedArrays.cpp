/*
Merge K sorted arrays using heaps
*/

#include<vector>
#include<queue>

typedef pair<int, pair<int, int> > ppi;

vector<int> mergeKSortedArrays(vector<vector<int>*> input){
    priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
       vector<int> solution;
    
    for(int i=0;i<input.size();i++){
        if(input[i]->size()>0){
            ppi x;
            x.first=input[i]->at(0);
            x.second.first=i;
            x.second.second=0;
            pq.push(x);
        }
    }
    
    while(!pq.empty()){
    
       solution.push_back(pq.top().first);
    if(input[pq.top().second.first]->size()==pq.top().second.second+1){
        pq.pop();
    }else{
    	ppi x;
       
        x.second.first=pq.top().second.first;
        x.second.second=pq.top().second.second+1;
        x.first=input[x.second.first]->at(x.second.second);
        pq.pop();
        pq.push(x);
    } 
    }
    return solution;
}


