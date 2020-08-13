/*
2 numbers with sum closest to 0 : GFG
*/
#include <iostream>
#include<algorithm>
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
	    
	    int posPtr=-1;
	    int negPtr=-1;
	    sort(arr,arr+n);
	    
	    int j=0;
	    while(arr[j]<0){
	        j++;
	    }
	    posPtr=j;
	    negPtr=posPtr-1;
	    int gap=INT_MAX;
	    int closestToZero=INT_MIN;
	    //case when negPtr=posPtr;
	    if(posPtr==n){
	       //posPtr==n -> no positive elem

	        closestToZero=arr[n-1]+arr[n-2];
	        cout<<closestToZero<<endl;
	        continue;
	    }else if(posPtr==0){
	        //posPtr==0 -> no negative elem
	        
	        closestToZero=arr[0]+arr[1];
	        cout<<closestToZero<<endl;
	        continue;
	    }
	    
	    while(negPtr>=0 && posPtr<n){
	        if(gap==INT_MAX || abs(arr[negPtr]+arr[posPtr]-0)<gap){
	            closestToZero=arr[negPtr]+arr[posPtr];
	            gap=abs(closestToZero-0);
	        }
	        if(arr[negPtr]+arr[posPtr]==0){
	            break;
	        }
	        if(arr[negPtr]+arr[posPtr]<0){
	            posPtr++;
	        }else{
	            negPtr--;
	    }
	    
	}
	cout<<closestToZero<<endl;
	}
	
	return 0;
}

