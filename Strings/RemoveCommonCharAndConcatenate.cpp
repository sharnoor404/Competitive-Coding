/*
Remove common characters and concatenate : GFG
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	 
	    cin>>s1>>s2;
	    int arr[26]={0};
	    for(int i=0;i<s2.length();i++){
	        arr[s2[i]-'a']=1;
	    }
	    for(int i=0;i<s1.length();i++){
	        if(arr[s1[i]-'a']==1){
	            //common to both
	            arr[s1[i]-'a']=3;
	        }else if(arr[s1[i]-'a']!=1 && arr[s1[i]-'a']!=3){
	            arr[s1[i]-'a']=2;
	        }
	    }
	   string ans="";
	    for(int i=0;i<s1.length();i++){
	        if(arr[s1[i]-'a']==2){
	            ans+=s1[i];
	        }
	    }
	    for(int i=0;i<s2.length();i++){
	        if(arr[s2[i]-'a']==1){
	            ans+=s2[i];
	        }
	    }
	    
	    //cout<<ans<<endl;
	    if(ans==""){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<ans<<endl;  
	    }
	  
	}
	return 0;
}
