/*
Find Kth Largest element
*/
#include<queue>
#include<vector>
#include<climits>
int kthLargest (std::vector<int> arr, int n, int k){
   
    if(n==0){
        return INT_MIN;
    }
    std::priority_queue<int,std::vector<int>,std::greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

