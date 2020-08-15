/*
Minimum number of deletions to make a palindrome
*/

//Recursive approach
#include <iostream>
using namespace std;

int LCS(string s,int start,int end){
    if(start==end){
        return 1;
    }
    if (s[start]==s[end] && start+1==end){
        //i.e only 2 characters and both equal
        return 2;
    }
    if(s[start]==s[end]){
        return 2+LCS(s,start+1,end-1);
    }
        return std::max(LCS(s,start+1,end),LCS(s,start,end-1));
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
        cout<<s.length()-LCS(s,0,s.length()-1)<<endl;
	}
	return 0;
}
