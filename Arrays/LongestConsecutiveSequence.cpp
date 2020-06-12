/*
You are given with an array of integers that contain numbers in random order. 
Write a program to find the longest possible sequence of consecutive numbers using the numbers from given array.
If two sequences are of equal length then return 
the sequence starting with the number whose occurrence is earlier in the array.
*/

#include <vector>
#include<unordered_map>
#include<climits>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){

    int len=0;
    int max_len=INT_MIN;
    int start=-1;
    int max_start=-1;
    unordered_map<int,int> ourmap;
	for(int i=0;i<n;i++){
        ourmap[arr[i]]=true;
    }
    for(int i=0;i<n;i++){
        if(ourmap[arr[i]]==true){
            int val=arr[i];
            ourmap[val]=false;
            len=1;
            start=arr[i];
            while(ourmap.count(val+1)>0 && ourmap[val+1]==true){
                ourmap[val+1]=false;
                val++;
                len++;
            }
            val=arr[i];
            while(ourmap.count(val-1)>0 && ourmap[val-1]==true){
                
                ourmap[val-1]=false;
                val--;
                start--;
                len++;
            }
            
            if(len>max_len){
                max_len=len;
                max_start=start;
            }else if(len==max_len){
                int index1=-1;
                int index2=-1;
                for(int i=0;i<n;i++){
                    if(arr[i]==start && index1==-1){
                        index1=i;
                    }else if(arr[i]==max_start && index2==-1){
                        index2=i;
                    }
                }
                if(index1<index2){
                   max_len=len;
                   max_start=start; 
                }
            }
            
        }
    }
    vector<int> solution;
    while(max_len>0){
        solution.push_back(max_start);
        max_start++;
        max_len--;
    }
    return solution;
}
