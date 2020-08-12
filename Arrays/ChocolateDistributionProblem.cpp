#include <iostream>
#include<algorithm>
/*
Chocolate distribution problem : GFG
*/

#include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int *arr=new int[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+n);
	    int m;
	    cin>>m;
	    int min_diff=INT_MAX;
	    
	    for(int j=0;j<=n-m;j++){
	        
	        if((arr[j+m-1]-arr[j])<min_diff){
	            min_diff=arr[j+m-1]-arr[j];
	        }
	    }
	    cout<<min_diff<<endl;
	}
}
