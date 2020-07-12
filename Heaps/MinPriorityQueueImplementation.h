#include<vector>

class priorityQueue{
	
	vector<int> pq;
	public:
	PriorityQueue(){
		
	}
	bool isEmpty(){
		return pq.size()==0;
	}
	int getSize(){
		return pq.size();
	}
	int getMin(){
		if(isEmpty()){
			//priority queue is empty
			return 0;
		}
		return pq[0];
	}
	void insert(int data){
		pq.push_back(data);
		int childIndex=pq.size()-1;
		while(childIndex>0){
			int parentIndex=(childIndex-1)/2;
			if(pq[parentIndex]>pq[childIndex]){
				int temp=pq[parentIndex];
				pq[parentIndex]=pq[childIndex];
				pq[childIndex]=temp;
			}else{
				break;
			}
			childIndex=parentIndex;
					}
	}
	
	int removeMin(){
		if(isEmpty()){
			return 0;
		}
		//swap with last
		int ans=pq[0];
		pq[0]=pq[pq.size()-1];
		pq[pq.size()-1]=ans;
		pq.pop_back();
		//perform down heapify
		int parentIndex=0;
		int minIndex=0;
		while(2*parentIndex+1 <pq.size() || 2* parentIndex+2<pq.size()){
			int leftChild=2*parentIndex+1;
			int rightChild=2*parentIndex+2;
			if(leftChild<pq.size() && pq[leftChild]<pq[minIndex]){
				minIndex=leftChild;
			}
			if(rightChild<pq.size() && pq[rightChild]<pq[minIndex]){
				minIndex=rightChild;
			}
			
			if(minIndex!=parentIndex){
				//swap
				int temp=pq[parentIndex];
				pq[parentIndex]=pq[minIndex];
				pq[minIndex]=temp;
				parentIndex=minIndex;
			}else{
				break;
			}
		}
		return ans;
	}
};
















