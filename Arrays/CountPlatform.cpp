/*Given two arrays (both of size n), one containing arrival time of trains 
and other containing the corresponding trains departure time (in the form of an integer) respectively. 
Return the minimum number of platform required, such that no train waits.
Arrival and departure time of a train can't be same.
*/
#include<algorithm>
int platformsNeeded(int arrival[], int departure[], int n) {
    int count=0;
    int max_count=0;
    sort(arrival,arrival+n);
    sort(departure,departure+n);
    

    int i=0;
    int j=0;
    
    while(i<n && j<n){
        if(arrival[i]<departure[j]){
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
    return max_count;
}
