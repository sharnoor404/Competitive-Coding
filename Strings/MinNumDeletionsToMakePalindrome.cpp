/*
THIS IS SAME AS NO: OF INSERTIONS SINCE MIN NO: OF INSERTIONS=MIN NO: OF DELETIONS
Minimum number of deletions to form a palindrome
minimum number of deletions=string length-longest palindromic subsequence(this is the max sized palindrome)
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

//Approach 2: using dynamic programming
#include <iostream>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
        int **arr=new int*[s.length()];
        for(int i=0;i<s.length();i++){
            arr[i]=new int[s.length()];
            for(int j=0;j<s.length();j++){
                if(i==j){
                    //since the longest palindromic string of a single char word is 1
                    arr[i][j]=1;
                }else{
                   arr[i][j]=0; 
                }
            }
        }
        
        for(int d=2;d<=s.length();d++){
            for(int i=0;i<s.length()-d+1;i++){
                int j=i+d-1;
                if(s[i]==s[j] && d==2){
                    arr[i][j]=2;
                }
                else if(s[i]==s[j]){
                    arr[i][j]=2+arr[i+1][j-1];
                }else{
                    arr[i][j]=std::max(arr[i+1][j],arr[i][j-1]);
                }
            }
        }
       cout<<s.length()-arr[0][s.length()-1]<<endl; 
	}
	return 0;
}
