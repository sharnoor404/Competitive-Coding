/*
Given an integer array A of size n. 
Find and print all the leaders present in the input array.
 An array element A[i] is called Leader, 
 if all the elements following it (i.e. present at its right) 
 are less than or equal to A[i].
Print all the leader elements separated by space and in the
 same order they are present in the input array.
*/

#include<climits>
#include<vector>
void Leaders(int* arr,int len)
{
    vector<int> store;
    int max=INT_MIN;
    for(int i=len-1;i>=0;i--){
        if(arr[i]>=max){
            max=arr[i];
            store.push_back(arr[i]);
        }
    }
    for(int i=store.size()-1;i>=0;i--){
        cout<<store[i]<<" ";
    }
}

