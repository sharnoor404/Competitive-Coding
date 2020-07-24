// input - given string
// output - output string that contains largest unique substring
#include<unordered_map>
#include<string>
using namespace std;
void findLargestUniqueSubstring(char input[], char output[]){
	
    std::unordered_map<int,int> ourmap;
    int start=-1;
    int max_length=0;
    int final_start=-1;
    int i=0;
    for(i=0;input[i]!='\0';i++){
        if(ourmap.count(input[i])>0){
            
            if(i-start>max_length){
                max_length=i-start;
                final_start=start;
            }
                i=ourmap[input[i]];
            	start=-1;
                ourmap.clear();
        }else{
            if(start==-1){
                start=i;
            }
            ourmap[input[i]]=i;
           
        }
    }
    
    if(start!=-1 && (i-start)>max_length){
        max_length=i-start;
        final_start=i;
    }
    
    for(i=final_start;i<final_start+max_length;i++){
        output[i-final_start]=input[i];
    }
    output[max_length]='\0';

    
}

