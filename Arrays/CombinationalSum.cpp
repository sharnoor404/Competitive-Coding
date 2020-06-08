/*
Given an array of integers A and an integer B.
 Find and return all unique combinations in A where the sum of elements is equal to B.
Elements of input array can be repeated any number of times.
One combination should be saved in increasing order. 
Order of different combinations doesn't matter.
*/

#include <vector>
#include<algorithm>
void helper(vector<int>& ar, int sum,vector<vector<int>>& solution,vector<int> x,int index){
    if(sum==0){
        sort(x.begin(),x.end());
        solution.push_back(x);
        return;
    }
    
	for(int i=index;i<ar.size();i++){
        if(sum-ar[i]>=0){
            x.push_back(ar[i]);
            helper(ar,sum-ar[i],solution,x,i);
            x.pop_back();
        }
    }    
}

vector<vector<int> > combinationSum(vector<int>& ar, int sum){
  
    vector<vector<int>> solution;
    vector<int> x;
    ar.erase(unique(ar.begin(), ar.end()), ar.end());
    helper(ar, sum,solution,x,0);
    return solution;

}



