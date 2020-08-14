/*
Maximum of all subarrays of size k
*/
#include <iostream>
#include<climits>
#include<deque>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    int *arr=new int[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    
	    deque<int> Q;
	    
	   /*
	   int max=0;
	    for(int j=1;j<k;j++){
	        if(arr[j]>arr[max]){
	            max=j;
	        }
	    }
	    Q.push_back(max);
	 */
	 for(int j=0;j<k;j++){
	     while(!Q.empty() && arr[j]>=arr[Q.back()])
	        Q.pop_back();
	   
	     Q.push_back(j);
	 }
	    
	   // cout<<arr[Q.front()]<<endl;
	    for(int j=k;j<n;j++){
	        cout<<arr[Q.front()]<<" ";
	        
	        while(!Q.empty() && Q.front()<=(j-k)){
	            Q.pop_front();
	        }
	        while(!Q.empty() && arr[j]>=arr[Q.back()]){
	            Q.pop_back();
	        }
	        Q.push_back(j);
	    }
	    cout<<arr[Q.front()]<<endl;
	}
	return 0;
}
