/*
Count pairs with given sum : GFG
*/

//Approach 1:

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


//Approach 2:

#include <iostream>
#include <algorithm>
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
        sort(arr,arr+n);
        int i=0;int j=n-1;
        int count=0;
        while(i<j){
            if(arr[i]+arr[j]>k){
                j--;
            }else if(arr[i]+arr[j]<k){
                i++;
            }else{
                int x=i; int xx=arr[i];
                while(i<j && arr[i]==xx){
                    i++;
                }
                int y=j; int yy=arr[j];
                while(j>=i && arr[j]==yy){
                    j--;
                }
                if(xx==yy){
                    //remove duplicate count
                    //cout<<i<<" "<<x<<endl;
                    //cout<<j<<" "<<y<<endl;
                    int z=(i-x)+(y-j)-1;
                    count+=(z)*(z+1)/2;
                }else{
                    count+=((i-x)*(y-j));
                }
            }
        }
        cout<<count<<endl;
    }
   
    return 0;
}
