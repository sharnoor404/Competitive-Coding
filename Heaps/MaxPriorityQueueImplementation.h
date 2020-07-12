#include<vector>
#include<climits>
class PriorityQueue {
    vector<int> pq;
    public:
    PriorityQueue(){
        
    }
    
    int getSize(){
        return pq.size();
    }
    bool isEmpty(){
        return pq.size()==0;
    }
    void insert(int data){
        pq.push_back(data);
        int childIndex=pq.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(pq[parentIndex]<pq[childIndex]){
                int temp=pq[parentIndex];
                pq[parentIndex]=pq[childIndex];
                pq[childIndex]=temp;
            }else{
                break;
            }
            childIndex=parentIndex;
        }
    }
    
    int getMax(){
        if(isEmpty()){
            return INT_MIN;
        }
        return pq[0];
    }
    
    int removeMax(){
        if(isEmpty()){
            return INT_MIN;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parentIndex=0;
        int maxIndex=0;
        
        while(2*parentIndex+1<pq.size() || 2*parentIndex+2<pq.size()){
            int leftChild=2*parentIndex+1;
            int rightChild=2*parentIndex+2;
            if(leftChild<pq.size() && pq[leftChild]>pq[maxIndex]){
                maxIndex=leftChild;
            }
            if(rightChild<pq.size() && pq[rightChild]>pq[maxIndex]){
                maxIndex=rightChild;
            }
            if(parentIndex!=maxIndex){
                int temp=pq[parentIndex];
                pq[parentIndex]=pq[maxIndex];
                pq[maxIndex]=temp;
            	parentIndex=maxIndex;
            }else{
                break;
            }
        }
        return ans;
    }
    
};

