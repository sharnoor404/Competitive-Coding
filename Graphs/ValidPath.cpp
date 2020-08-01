/*
Given a rectangle with bottom left corner as (0,0) and top right corner as (x,y).
The rectangle contains N circles (with radius R) such that their centers are inside the rectangle.
Check if there exists a path from (0,0) to (x,y) without touching any circle. 
Movement is allowed in all 8 directions.
*/
void mark_nonwalkable_area(int **rectangle,int A,int B,int x,int y,int radius){
    
    int left_extreme;
    int right_extreme;
    
    if(x-radius>=0){
        left_extreme=x-radius;
    }else{
        left_extreme=0;
    }
    
    if(x+radius<=A){
        right_extreme=x+radius;
    }else{
        right_extreme=A;
    }
    
    int top_extreme;
    int bottom_extreme;
    
    if(y-radius>=0){
        bottom_extreme=y-radius;
    }else{
        bottom_extreme=0;
    }
    
    if(y+radius<=B){
        top_extreme=y+radius;
    }else{
        top_extreme=B;
    }
    
    for(int i=bottom_extreme;i<=top_extreme;i++){
        for(int j=left_extreme;j<=right_extreme;j++){
            int dist=(i-y)*(i-y)+(j-x)*(j-x);
           // cout<<i<<","<<j<<" "<<dist<<endl;
  
            if(dist<=radius*radius){
                rectangle[i][j]=0;
            }
        }
    }
    
    //cout<<left_extreme<<" "<<right_extreme<<endl;
    //cout<<bottom_extreme<<" "<<top_extreme<<endl;
    
}

bool check_path(int **rectangle,int col,int row,int curr_row,int curr_col){
  
  
   if(curr_row==row && curr_col==col){
           return true;
   }
   
   if(curr_row>row || curr_col>col || curr_row<0 || curr_row>row){
       return false;
   }
    //check for movement in all 8 directions
    
    rectangle[curr_row][curr_col]=0;
    
    if(curr_col+1<=col && rectangle[curr_row][curr_col+1]==1){
        if(check_path(rectangle,col,row,curr_row,curr_col+1)){
            return true;
        }
    }
    
    if(curr_row+1<=row && rectangle[curr_row+1][curr_col]==1){
        if(check_path(rectangle,col,row,curr_row+1,curr_col)){
            return true;
        }
    }
    
    if(curr_col-1>=0 && rectangle[curr_row][curr_col-1]==1){
        if(check_path(rectangle,col,row,curr_row,curr_col-1)){
            return true;
        }
    }
    
    if(curr_row-1>=0 && rectangle[curr_row-1][curr_col]==1){
        if(check_path(rectangle,col,row,curr_row-1,curr_col)){
            return true;
        }
    }
    
    if(curr_row+1<=row && curr_col+1<=col && rectangle[curr_row+1][curr_col+1]==1){
        if(check_path(rectangle,col,row,curr_row+1,curr_col+1)){
            return true;
        }
    }
    
    if(curr_row-1>=0 && curr_col-1>=0 && rectangle[curr_row-1][curr_col-1]==1){
        if(check_path(rectangle,col,row,curr_row-1,curr_col-1)){
            return true;
        }
    }
    
    if(curr_row-1>=0 && curr_col+1<=col && rectangle[curr_row-1][curr_col+1]==1){
        if(check_path(rectangle,col,row,curr_row-1,curr_col+1)){
            return true;
        }
    }
    
    if(curr_col-1>=0 && curr_row+1<=row && rectangle[curr_row+1][curr_col-1]==1){
        if(check_path(rectangle,col,row,curr_row+1,curr_col-1)){
            return true;
        }
    }
   
    return false;
    
}


string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {

    int **rectangle=new int*[B+1];
    //'1'=> walkable area
    //'0'=> non walkable area;
    
    for(int i=0;i<=B;i++){
        rectangle[i]=new int[A+1];
        for(int j=0;j<=A;j++){
            rectangle[i][j]=1;
        }
    }
    
    for(int i=0;i<C;i++){
        mark_nonwalkable_area(rectangle,A,B,E[i],F[i],D);
    }
  
    string ans="";
    if(rectangle[0][0]==0 || rectangle[B][A]==0){
        ans="NO";
        return ans;
    }
    
    if(check_path(rectangle,A,B,0,0)){
        ans="YES";
    }else{
        ans="NO";
    }
    
    return ans;
    
}

