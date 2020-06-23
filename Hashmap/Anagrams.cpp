/*
Given an array of strings, return all groups of strings that are anagrams. 
Represent a group by a list of integers representing the index in the original list.
Eg)
Input : cat dog god tca
Output : [[1, 4], [2, 3]]
*/
vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
   unordered_map<string,vector<int>> ourmap;
    
    for(int i=0;i<A.size();i++){
            string x=A[i];
            sort(x.begin(),x.end());
            ourmap[x].push_back(i+1);
        
    }
    unordered_map<string,vector<int>>:: iterator it=ourmap.begin();
    vector<vector<int>> solution;
    while(it!=ourmap.end()){
        solution.push_back(it->second);
        it++;
    }
    return solution;
}

