/*
Largest Rectangle from a Histogram
*/

#include <iostream>
#include<stack>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int *heights=new int[N];
	    for(int j=0;j<N;j++){
	        cin>>heights[j];
	    }
	    
	    if(N==0){
	        cout<<'0'<<endl;
	        continue;
	    }else if(N==1){
	        cout<<heights[0]<<endl;
	        continue;
	    }
	    
	    stack<int> indices;
	    int max_area=0;
	    indices.push(0);
	    for(int j=1;j<N;j++){
	        
	        int curr=heights[j];
	        
	        if(curr>=heights[indices.top()]){
	            indices.push(j);
	        }else{
	            while(!indices.empty() && curr<heights[indices.top()])
	                {   int temp=heights[indices.top()];
	                    indices.pop();
	                    if(indices.empty()){
	                        max_area=std::max(max_area,temp*j);
	                    }else{
	                        max_area=std::max(max_area,temp*(j-indices.top()-1));
	                    }
	                    
	                }
	            indices.push(j);
	        }
	    }
	    
	    
	    if(!indices.empty()){
	        int j=N;
	     while(!indices.empty())
	                {   
	                    int temp=heights[indices.top()];
	                    indices.pop();
	                    if(indices.empty()){
	                        max_area=std::max(max_area,temp*j);
	                    }else{
	                        max_area=std::max(max_area,temp*(j-indices.top()-1));
	                    }
	                }
	    }
	    
	    
	    cout<<max_area<<endl;
	 
	}

	return 0;
}

