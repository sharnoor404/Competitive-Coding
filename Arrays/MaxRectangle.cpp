/*
Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.
*/
int findMaxArea(int* height, int m){
    int Area=0;
    if(m==0){
        return 0;
    }
    if(m==1){
        return height[0];
    }
    stack<int> s;
    s.push(0);
    for(int i=1;i<m;i++){
        if(s.empty()|| height[i]>=height[s.top()]){
            s.push(i);
        }else{
            while(!s.empty() && height[i]<height[s.top()]){
                int temp=height[s.top()];
                s.pop();
                if(s.empty()){
                    Area=std::max(Area,temp*i);
                }else{
                    Area=std::max(Area,temp*(i-s.top()-1));   
                }
            }
            s.push(i);
        }
    }
    
    if(!s.empty()){
           while(!s.empty()){
               int i=m;
                int temp=height[s.top()];
                s.pop();
                if(s.empty()){
                    Area=std::max(Area,temp*i);
                }else{
                    Area=std::max(Area,temp*(i-s.top()-1));   
                }
            }
    }
    return Area;
}
int maxArea(int M[MAX][MAX], int n, int m) {
    if(n==0){
        return 0;
    }
    int* height=new int[m];
    for(int i=0;i<m;i++){
        height[i]=0;
    }
    
    int Area=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==0){
                height[i]=0;
            }else{
                height[i]++;
            }
        }
         Area=std::max(Area, findMaxArea(height,m));
    }
    return Area;
}

