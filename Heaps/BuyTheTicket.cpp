/*
Buy The Ticket Problem CN
*/

#include<queue>
typedef pair<int,int> p;
int buyTicket (int *arr, int n, int k){
    int timeCount=0;
    priority_queue<p> pq;
    queue<p> y;
    for(int i=0;i<n;i++){
        
        p x;
        x.first=arr[i];
        x.second=i;
        pq.push(x);
        y.push(x);
    }
    
    while(!y.empty()){
        if(y.front().first==pq.top().first){
            timeCount++;
            if(y.front().second==k){
                break;
            }
            pq.pop();
            y.pop();
            
        }else{
            y.push(y.front());
            y.pop();
        }
    }
    return timeCount;
    
}

