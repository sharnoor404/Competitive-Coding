/*
Given an array of integers and an integer K. 
Write a program to find and print all pairs which have difference K
*/
#include<unordered_map>
void printPairs(int *input, int n, int k) {

unordered_map<int,int> ourmap;
    for(int i=0;i<n;i++){
        ourmap[input[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(ourmap.count(input[i]+k)>0 && ourmap[input[i]+k]>0){
             ourmap[input[i]]--;
            int temp=ourmap[input[i]+k];
            while(temp>0){
                if(input[i]+k<=input[i]){
                cout<<input[i]+k<<" "<<input[i]<<endl;
            }else{
                cout<<input[i]<<" "<<input[i]+k<<endl;
            }
                temp--;
            }
            
        }
        if(ourmap.count(input[i]-k)>0 && ourmap[input[i]-k]>0){
             ourmap[input[i]]--;
            int temp=ourmap[input[i]-k];
            while(temp>0){
              if(input[i]-k<=input[i]){
                cout<<input[i]-k<<" "<<input[i]<<endl;
            }else{
                cout<<input[i]<<" "<<input[i]-k<<endl;
            }  
                temp--;
            }
            
        }
    }
}



