/* Given an array of n words. 
Some words are repeated twice, we need count such words.
*/

#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    unordered_map<string,int> ourmap;
	    int count=0;
	    for(int j=0;j<N;j++){
	            string s;
	            cin>>s;
	            ourmap[s]++;
	            if(ourmap[s]==2){
	                count++;
	            }else if(ourmap[s]>2){
	                ourmap[s]=0;
	                count--;
	            }
	    }
	    
	    cout<<count<<"\n";
	}
}
