/*
Running median(refer CN doubt)
Print the median of all the numbers in the order they are added.
*/

#include<queue>
#include<vector>
using namespace std;
void findMedian(int arr[], int n){
    
    std::priority_queue<int> maxHeap;
    std::priority_queue<int,std::vector<int>,std::greater<int>> minHeap;
    
    if(n>0){
        maxHeap.push(arr[0]);
        cout<<arr[0]<<endl;
    }
    
    for(int i=1;i<n;i++){
       if(arr[i]<=maxHeap.top()){
           maxHeap.push(arr[i]);
       }else{
           minHeap.push(arr[i]);
       }
        
        if(((int)maxHeap.size()-(int)minHeap.size())>1){
            //cout<<maxHeap.size()<<" "<<minHeap.size()<<endl;
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }else if (((int)minHeap.size()-(int)maxHeap.size())>1){
            //cout<<maxHeap.size()<<" "<<minHeap.size()<<endl;
         	maxHeap.push(minHeap.top());
         	minHeap.pop();
        }
        
        
        if(minHeap.size()==maxHeap.size()){
            cout<<(minHeap.top()+maxHeap.top())/2<<endl;
        }else if(minHeap.size()>maxHeap.size()){
            cout<<minHeap.top()<<endl;
        }else{
            cout<<maxHeap.top()<<endl;
        }
    }

}

