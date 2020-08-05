/*
Count triplets such that sum of two equals the third element.
*/

#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int *arr=new int[N];
	    unordered_map<int,bool> ourmap;
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	        ourmap[arr[j]]=true;
	    }
	    int count=0;
	    for(int i=0;i<N;i++){
	        for(int j=i+1;j<N;j++){
	            if(ourmap.count(arr[i]+arr[j])>0){
	                count++;
	            }
	        }
	    }
	    if(count==0){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<count<<endl;
	    }
	     
	}
	return 0;
}
