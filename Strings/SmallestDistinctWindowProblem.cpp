/*
Smallest distinct window problem
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    string S;
	    cin>>S;
	    
	    bool arr1[26]={false};
	    int count=0;
	    
	    for(int j=0;j<S.length();j++){
	        if(arr1[S[j]-'a']==false){
	            arr1[S[j]-'a']=true;
	            count++;
	        }
	    }
	    //cout<<count<<endl;
	    int minLength=INT_MAX;
	    int arr[26]={0};
	    int start=0;
	    int distinctCount=0;
	    for(int j=0;j<S.length();j++){
	       arr[S[j]-'a']++;
	       
	       if(arr[S[j]-'a']==1){
	           distinctCount++;
	       }
	       
	       if(distinctCount==count){
	           while(arr[S[start]-'a']>1){
	                arr[S[start]-'a']--;
	                start++;
	            }
	           if(minLength>j-start+1){
	               minLength=j-start+1;
	           }
	       }
	    }
	    
	cout<<minLength<<endl;
}
return 0;
}
