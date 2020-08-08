/*
Meeting rooms problem : IB
*/
int Solution::solve(vector<vector<int> > &A) {
    //detect max overlap
    vector<int> entryTime;
    vector<int> exitTime;
    for(int i=0;i<A.size();i++){
        entryTime.push_back(A[i][0]);
        exitTime.push_back(A[i][1]);
    }
    sort(entryTime.begin(),entryTime.end());
    sort(exitTime.begin(),exitTime.end());
    int i=0,j=0,count=0,max_room=0;
    while(i<entryTime.size()){
        if(entryTime[i]<exitTime[j]){
            count++;
            i++;
            if(count>max_room){
                max_room=count;
            }
        }else{
            count--;
            j++;
        }
    }
    return max_room;
}

