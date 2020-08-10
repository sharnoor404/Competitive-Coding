/*
Trapping rain water : GFG
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int *arr=new int [n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int height1=-1;
	    int height2=-1;
	    int maxTrappedWater=0;
	    
	    for(int j=0;j<n;j++){
	        if(arr[j]>arr[j+1]){
	            if(height1==-1){
	                height1=j;
	            }else{
	                height2=j;
	            }
	        }
	        if(height1!=-1 && height2!=-1){
	            int temp=0;
	           cout<<height1<<" "<<height2<<endl;
	            int h=std::max(arr[height1],arr[height2]);
	             
	             for(int k=height1+1;k<height2;k++){
	                temp+=(h-arr[k]);
	            }
	            cout<<endl;
	            if(temp>maxTrappedWater){
	                maxTrappedWater=temp;
	            }
	            if(arr[height2]>arr[height1]){
	                height1=height2;
	                height2=-1;
	            }
	        }
	       
	        
	    }
	    cout<<maxTrappedWater<<endl;
	}
	return 0;
}
