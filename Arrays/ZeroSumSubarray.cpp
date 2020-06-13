/*
Given an array (of size N) consisting of positive and negative integers in random order.
Write a program to return true if there exists a sub-array whose sum is zero else, return false.
*/
#include<unordered_map>
bool subArrayZeroSum(int input[], int n) {
	unordered_map<int,bool> ourmap;
    long long int sum=0;
	for(int i=0;i<n;i++){
        sum=sum+input[i];
        if(ourmap.count(sum)>0 || sum==0 ||input[i]==0){
            return true;
        }
        ourmap[sum]=true;
    }    
    return false; 	
}


