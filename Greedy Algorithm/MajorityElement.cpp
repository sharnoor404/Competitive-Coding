/*
Given a non empty array, find the majority element (one that occurs more than floor[n/2] times).
*/

int Solution::majorityElement(const vector<int> &A) {
    vector<int> temp;
    int max_elem;
    for(int i=0;i<A.size();i++){
        temp.push_back(A[i]);
    }
    sort(temp.begin(),temp.end());
    int max_count=0;
    for(int i=0;i<temp.size();i++){
        int x=temp[i];
        i++;
        int count=1;
        while(i<temp.size() && temp[i]==x){
            count++;
            i++;
        }
        if(count>max_count){
            max_count=count;
            max_elem=x;
        }
        if(i==temp.size()){
            continue;
        }else{
            i--;
        }
        
    }
    return max_elem;
}

//approach 2: greedy

int Solution::majorityElement(const vector<int> &A) {
    if(A.size()==0){
        return 0;
    }
    int majority_elem=A[0];
    int count=1;
    for(int i=1;i<A.size();i++){
        if(count==0){
            majority_elem=A[i];
            count=0;
        }
        if(A[i]==majority_elem){
            count++;
        }else{
            count--;
        }
    }
    return majority_elem;
}

