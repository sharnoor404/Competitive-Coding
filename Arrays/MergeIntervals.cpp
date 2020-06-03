/*
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

Example 1:

Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

Example 2:

Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].

This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

Make sure the returned intervals are also sorted.
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
 
 bool overlap(Interval a,Interval b){
     if(max(a.start,b.start)>min(a.end,b.end)){
         return false;
     }else{
         return true;
     }
 }
 
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

vector<Interval> solution;

if(intervals.size()==0){
    
    solution.push_back(newInterval);
    
}else if(newInterval.end<intervals[0].start || newInterval.start>intervals[intervals.size()-1].end){
    
    if(newInterval.end<intervals[0].start){
        solution.push_back(newInterval);
    }
    for(int i=0;i<intervals.size();i++){
        solution.push_back(intervals[i]);
    }
    if(newInterval.start>intervals[intervals.size()-1].end){
        solution.push_back(newInterval);
    }
    
}else{
    
    for(int i=0;i<intervals.size();i++){
        while(i<intervals.size() && overlap(intervals[i],newInterval)){
            newInterval.start=min(intervals[i].start,newInterval.start);
            newInterval.end=max(intervals[i].end,newInterval.end);
            i++;
        }
        if(i==intervals.size()){
            solution.push_back(newInterval);
            break;
        }
        
        if(newInterval.end<intervals[i].start){
            solution.push_back(newInterval);
            for(i;i<intervals.size();i++){
                solution.push_back(intervals[i]);
            }
            break;
        }else if(intervals[i].end<=newInterval.start){
            solution.push_back(intervals[i]);
        }
       
    }
}

    return solution;
}

