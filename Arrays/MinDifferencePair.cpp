/*
Given an unsorted array, find the minimum difference between any pair in given array.
*/
#include<algorithm>
#include<climits>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int *arr=new int[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+N);
	    int min_gap=INT_MAX;
	    for(int j=0;j<N-1;j++){
	        if(arr[j+1]-arr[j]<min_gap){
	            min_gap=arr[j+1]-arr[j];
	        }
	    }
	    cout<<min_gap<<"\n";
	}
}
