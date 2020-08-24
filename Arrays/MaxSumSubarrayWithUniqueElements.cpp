/*
Max sum subarray with all elements unique : GFG
*/

#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	unordered_map<int,int> ourmap;
	long long int maxSum=0;
	long long int sum=0;
	int startIndex=0;
	int endIndex=0;
	int start=0;
	
	for(int i=0;i<n;i++){
		if(ourmap.count(arr[i])==0){
			sum+=arr[i];
			ourmap[arr[i]]=i;
		}else{
			//repetition occured
			if(sum>maxSum){
				startIndex=start;
				endIndex=i;
				maxSum=sum;
			}
			i=ourmap[arr[i]];
			start=i+1;
			ourmap.clear();
			sum=0;
		}
	}
	
	if(sum>maxSum){
		maxSum=sum;
		startIndex=start;
		endIndex=n;
	}
	cout<<"Maximum sum = "<<maxSum<<endl;
	for(int i=startIndex;i<endIndex;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
