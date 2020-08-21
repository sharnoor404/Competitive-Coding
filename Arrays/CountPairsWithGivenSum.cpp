/*
Count pairs with given sum : GFG
*/

#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> charFreq;
        for(int i=0;i<n;i++){
            charFreq[arr[i]]++;
        } 
        int ansCount=0;
        for(int i=0;i<n;i++){
          if(charFreq.count(k-arr[i])>0){
              if((k-arr[i])==arr[i]){
                  ansCount+=(charFreq[k-arr[i]]-1);
              }else{
                  ansCount+=(charFreq[k-arr[i]]);
              }
          }  
        }
        cout<<ansCount/2<<endl;
    }
   
    return 0;
}
