/*
Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(Interval a,Interval b){
     return a.start<b.start;
 }
 
 bool overlap(Interval a,Interval b){
     if(max(a.start,b.start)>min(a.end,b.end)){
         return false;
     }else{
         return true;
     }
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A.size()==0 || A.size()==1 ){
        return A;
    }
    vector<Interval> solution;
    
        //step 1: sort Intervals according to their start times
        sort(A.begin(),A.end(),comp);

        Interval x=A[0];
        
        for(int i=1;i<=A.size();i++){
            while(i<A.size() && overlap(A[i],x)){
                x.start=min(x.start,A[i].start);
                x.end=max(x.end,A[i].end);
                i++;
            }
            solution.push_back(x);
            if(i<A.size()){
                x=A[i];
            }
            
        }

    return solution;
}

