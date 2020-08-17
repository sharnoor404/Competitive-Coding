/*
Most frequent word in an array of strings: GFG
incase of tie print word whose first occurance occurs last
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    unordered_map<string,pair<int,int>> ourmap;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        if(ourmap.count(s)==0){
	            ourmap[s].second=i;
	        }
	        ourmap[s].first++;
	    }
	    unordered_map<string,pair<int,int>> ::iterator it=ourmap.begin();
	    string max;
	    while(it!=ourmap.end()){
	        if(it->second.first>ourmap[max].first || (it->second.first==ourmap[max].first && it->second.second>ourmap[max].second)){
	            max=it->first;
	        }
	        it++;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
