/*
Longest Palindrome in a String : GFG
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    //odd length palindrome
	    int maxOddLength=0;
	    string maxOddLengthPalindrome="";
	    for(int i=0;i<s.length();i++){
	        int l=i-1;
	        int r=i+1;
	        int count=1;
	        while(l>=0 && r<s.size() && s[l]==s[r]){
	            l--;
	            r++;
	            count++;
	        }
	        if(count>maxOddLength){
	            maxOddLength=count;
	            maxOddLengthPalindrome="";
	            for(int j=l+1;j<r;j++){
	                maxOddLengthPalindrome+=s[j];
	            }
	        }
	    }
	    int maxEvenLength=0;
	    string maxEvenLengthPalindrome="";
	    for(int i=0;i<s.length()-1;i++){
	        
	        if(s[i]==s[i+1]){
	            int count=2;
	            int l=i-1;
	            int r=i+2;
	            while(l>=0 && r<s.size() && s[l]==s[r]){
	                l--;
	                r++;
	                count++;
	            }
	            if(count>maxEvenLength){
	                maxEvenLength=count;
	                maxEvenLengthPalindrome="";
	                for(int j=l+1;j<r;j++){
	                maxEvenLengthPalindrome+=s[j];
	                }
	            }
	        }
	        
	    }
	    
	    //cout<<maxEvenLengthPalindrome<<" "<<maxOddLengthPalindrome<<endl;
	    if(maxEvenLength>maxOddLength){
	        cout<<maxEvenLengthPalindrome<<endl;
	    }else{
	        cout<<maxOddLengthPalindrome<<endl;
	    }
	}
	return 0;
}
