/*
 Given an array of integers that contain numbers in random order. 
 Write a program to find and return the number which occurs the maximum times in the given input.
*/

#include<climits>
#include<unordered_map>
int highestFrequency(int *input, int n){

		int max_val=INT_MAX;
    	int max=INT_MIN;
	unordered_map<int,int> ourmap;
        for(int i=0;i<n;i++){
            ourmap[input[i]]++;
            if(ourmap[input[i]]>max){
                max_val=input[i];
                max=ourmap[input[i]];
            }
        }
     	
     return max_val;	
}


