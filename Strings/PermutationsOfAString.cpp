/*
Permutations of a given string : GFG
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printPermutations(string S,bool *visited,string ans){
    
    if(ans.size()==S.size()){
        cout<<ans<<" ";
        return;
    }
    
    for(int i=0;i<S.size();i++){
        if(visited[i]==false){
            visited[i]=true;
            printPermutations(S,visited,ans+S[i]);
            visited[i]=false;
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string S;
	    cin>>S;
	    sort(S.begin(),S.end());
	    bool *visited=new bool[S.size()];
	    for(int i=0;i<S.size();i++){
	        visited[i]=false;
	    }
	    
	    for(int i=0;i<S.size();i++){
	        string ans="";
	        ans+=S[i];
	        visited[i]=true;
	        printPermutations(S,visited,ans);
	        visited[i]=false;
	    }
	    cout<<endl;
	}
	return 0;
}
