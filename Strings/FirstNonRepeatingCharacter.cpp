/*
First non repeating character : GFG
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    int index[26];
	    for(int i=0;i<26;i++){
	        index[i]=-1;
	    }
	    for(int i=0;i<N;i++){
	        if(index[S[i]-'a']==-1){
	            index[S[i]-'a']=i;
	        }else{
	            //repeating
	            index[S[i]-'a']=INT_MAX;
	        }
	    }
	    int ans;
	    int ansIndex=INT_MAX;
	    for(int i=0;i<26;i++){
	        if(index[i]>=0 && index[i]!=INT_MAX && index[i]<ansIndex){
	            ansIndex=index[i];
	            ans=i;
	        }
	    }
	    if(ansIndex==INT_MAX){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<char(ans+'a')<<endl;
	    }
	}
	return 0;
}
