/*
Given an array, find and return the length of longest subarray containing equal number of 0s and 1s.
*/

//approach 1:

#include<unordered_map>
int max(int arr[], int n) {
    unordered_map<int,int> ourmap;
    ourmap[0]=1;
    ourmap[1]=-1;
    int max_length=0,i=0,k=0,length=0,sum=0;
    for(int j=i;j<n;j++){
        if(n-j>max_length){
              sum=0;
            k=0;
        length=0;
        while((arr[j]==1|| arr[j]==0) && j<n){
        sum=sum+ourmap[arr[j]];
        k++;
        if(sum==0){
            length=k;
        }
            j++;
    }
        if(length>max_length){
        max_length=length;
    }
          k=0;
            length=0;
            sum=0;
        if(j==n ||(j==n-1)){
            j=i;
            i=i+1;
           
        } 
    }
         
        }
  
    return max_length;
}


//approach 2:

#include<unordered_map>
#include<vector>
int max(int arr[], int n) {
	unordered_map<int,vector<int>> ourmap;
    vector<int> x;
    int sum_till_now=0;
    x.push_back(sum_till_now);
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            sum_till_now--;
            x.push_back(sum_till_now);
        	
        }else if(arr[i]==1){
            sum_till_now++;
            x.push_back(sum_till_now);
        	
        }
        
    }
    

    for(int i=0;i<x.size();i++){
        ourmap[x[i]].push_back(i);
    }
    
    unordered_map<int,vector<int>>:: iterator it=ourmap.begin();
    int max_length=0;
    while(it!=ourmap.end()){
        if(it->second.size()>=2){
            if((it->second[it->second.size()-1])-(it->second[0])>max_length){
                max_length=(it->second[it->second.size()-1])-(it->second[0]);
            }
            
        }
        it++;
    }
    return max_length;
}


