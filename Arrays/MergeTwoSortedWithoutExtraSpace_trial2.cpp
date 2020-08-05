/*
Merge without extra space
*/

//Approach 1:
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    int *arr1=new int[x];
	    int *arr2=new int[y];
	    for(int j=0;j<x;j++){
	        cin>>arr1[j];
	    }
	    for(int j=0;j<y;j++){
	        cin>>arr2[j];
	    }
	    
	    int a=0;
	    int b=0;
	    while(a<x && b<y){
	        if(arr1[a]>arr2[b]){
	            //swap;
	            int temp=arr1[a];
	            arr1[a]=arr2[b];
	            arr2[b]=temp;
	            sort(arr2,arr2+y);
	        }
	            a++;
	        
	    }
	    
	    for(int j=0;j<x;j++){
	        cout<<arr1[j]<<" ";
	    }
	    for(int j=0;j<y;j++){
	        cout<<arr2[j]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

//Approach 2:
