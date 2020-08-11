/*
Given an unsorted array, find if there exists a pythagorean triplet or not
*/
#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    
	    int n;
	    cin>>n;
	    int *arr=new int[n];
	    for(int j=0;j<n;j++){
	        int x;
	        cin>>x;
	       arr[j]=pow(x,2);
	    }
	    sort(arr,arr+n);
	    bool flag=false;
	    for(int j=n-1;j>=0;j--){
	        int l=0;
	        int r=j-1;
	        while(l<r){
	            if(arr[l]+arr[r]==arr[j]){
	                cout<<"Yes"<<endl;
	                flag=true;
	                break;
	            }else if(arr[l]+arr[r]<arr[j]){
	               l++;
	            }else{
	                r--;
	            }
	            
	        }
	        if(flag==true){
	            break;
	        }
	        
	    }
	    if(flag==false){
	        cout<<"No"<<endl;
	    }
	   
	}
	return 0;
}
