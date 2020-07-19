/* Single Char Problem Round 2 CN Hire Test */
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        
        string s;
        cin>>s;
        
        unordered_map<char,int> ourmap;
    for(int i=0;i<s.length();i++){
        ourmap[s[i]]++;
    }
    char max_char='0';
    int max_char_count=0;
    unordered_map<char,int>:: iterator it=ourmap.begin();
    while(it!=ourmap.end()){
        if(it->second>max_char_count ||(it->second == max_char_count && it->first<max_char)){
            max_char_count=it->second;
            max_char=it->first;
        }
        it++;
    }
    
    string ans="";
    for(int i=0;i<max_char_count;i++){
        ans+=max_char;
    }
    cout<<ans<<endl;
    ourmap.clear();
    }
    
    return 0;
}

