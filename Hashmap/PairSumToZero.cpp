/*
Given a random integer array A of size N. 
Find and print the pair of elements in the array which sum to 0.
*/
#include<unordered_map>
	void PairSum(int *input, int n) {	 
		
        unordered_map<int,int> ourmap;
     	for(int i=0;i<n;i++){
            ourmap[input[i]]++;
        }
     	
        for(int i=0;i<n;i++){
            if(ourmap[-input[i]]>0){
                int temp=ourmap[-input[i]];
                while(temp>0){
                    if(input[i]<-input[i]){
                        cout<<input[i]<<" "<<-input[i]<<endl;
                    }else{
                        cout<<-input[i]<<" "<<input[i]<<endl;
                    }
                    temp--;
                }
               ourmap[input[i]]--; 
            }
        }
     	
 	}


