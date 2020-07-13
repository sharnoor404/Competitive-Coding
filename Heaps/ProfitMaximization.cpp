/*
Given an array A ,representing seats in each row of a stadium.Sell B tickets
s.t each seat costs equal to the number of vacant seats in the row it belongs to.
Maximize the profit.
*/

int Solution::solve(vector<int> &A, int B) {
    
    priority_queue<int> seats;
    for(int i=0;i<A.size();i++){
        seats.push(A[i]);
    }
    int cost=0;
    while(B>0){
        int x=seats.top();
        cost+=x;
        seats.pop();
        seats.push(x-1);
        B--;
    }
    
    return cost;
}

