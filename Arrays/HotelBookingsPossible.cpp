/*
A hotel manager has to process N advance bookings of rooms for the next season.
 His hotel has K rooms. Bookings contain an arrival date and a departure date. 
 He wants to find out whether there are enough rooms in the hotel to satisfy the demand. 
Write a program that solves this problem in time O(N log N) .
*/

bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    
    int count=0;
    int max_count=0;
    int i=0,j=0;
    while(i<arrive.size() && j<depart.size()){
        if(arrive[i]<depart[j]){
            count++;
            i++;
            if(count>max_count){
                max_count=count;
            }
        }else{
            count--;
            j++;
        }
    }
    if(max_count>K){
        return false;
    }else{
        return true;
    }
}

