/*
Given an array of integers, find two numbers such that they add up to a specific target number and return their indices.
where index1<index2 and the indices are not 0 based.
If multiple solutions exist, output the one where index2 is minimum. 
If there are multiple solutions with the minimum index2, choose the one with minimum index1 out of them.

*/
vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,vector<int>> ourmap;
    for(int i=0;i<A.size();i++){
        ourmap[A[i]].push_back(i);
    }
    
    unordered_map<int,vector<int>>::iterator it=ourmap.begin();
  
    vector<int> solution;
    int index1=INT_MAX;
    int index2=INT_MAX;

    for(int i=0;i<A.size();i++){
        int sum=B;
            sum=sum-A[i];
            if(ourmap.count(sum)>0){
                for(int j=0;j<ourmap[sum].size();j++){
                    if(ourmap[sum][j]!=i && i<ourmap[sum][j] && (ourmap[sum][j]<index2||(ourmap[sum][j]==index2 && i<index1))){
                        while(solution.size()!=0){
                            solution.pop_back();
                        }
                       
                        solution.push_back(i+1);
                        solution.push_back(ourmap[sum][j]+1);
                        index2=ourmap[sum][j];
                        index1=i;
                        break;
                    }
                }
            }
    }
    return solution;
}

