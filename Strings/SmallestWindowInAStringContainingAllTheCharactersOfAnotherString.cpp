/*
Smallest window in a string containing all the characters of another string : GFG
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string S,T;
	    
	    getline(cin,S);
	    getline(cin,T);
	    
	    int max_len=S.length();
	    int count=0;
	    int start=0;
	    int finalStart=-1;
	    int* text[256]={0};
	    int* pattern[256]={0};
	    
	    for(int i=0;i<T.length();i++){
	        pattern[T[i]]++;
	    }
	    
	    for(int i=0;i<S.length();i++){
	        text[S[i]]++;
	        if(pattern[S[i]]!=0 && text[S[i]]<=pattern[S[i]]){
	            count++;
	        }
	        if(count==T.length()){
	            while(pattern[S[start]]==0 || text[S[start]]>pattern[S[start]]){
	                text[S[start]]--;
	                start++;
	            }
	            
	            if(i-start+1<max_len){
	                max_len=i-start+1;
	                finalStart=start;
	            }
	        }
	    }
	   if(finalStart==-1){
	       cout<<"-1"<<endl;
	   }else{
	       for(int i=finalStart;i<finalStart+max_len;i++){
	           cout<<S[i];
	       }
	       cout<<endl;
	   } 
	}
	return 0;
}
