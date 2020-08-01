/*
Valid Path Problem : IB
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
        left_extreme=y-radius;
    }else{
        left_extreme=0;
    }
    
    if(y+radius<=B){
        right_extreme=y+radius;
    }else{
        right_extreme=B;
    }
    
    for(int i=left_extreme;i<=right_extreme;i++){
        for(int j=bottom_extreme;j<=top_extreme;j++){
            if(((i-x)*(i-x)+(j-y)*(j-y))<=radius*radius){
                rectangle[i][j]=0;
            }
        }
    }
    
}

bool check_path(int **rectangle,int col,int row,int curr_row,int curr_col){
  
   if(curr_row==row-1 && curr_col==col-1){
           return true;
   }
    //check for movement in all 8 directions
    
    if(curr_row+1<=row && rectangle[curr_row+1][curr_col]==1){
        if(check_path(rectangle,col,row,curr_row+1,curr_col)){
            return true;
        }
    }
    
    if(curr_col+1<=col && rectangle[curr_row][curr_col+1]==1){
        if(check_path(rectangle,col,row,curr_row,curr_col+1)){
            return true;
        }
    }
    
    if(curr_row-1>=0 && rectangle[curr_row-1][curr_col]==1){
        if(check_path(rectangle,col,row,curr_row-1,curr_col)){
            return true;
        }
    }
    
    if(curr_col-1>=0 && rectangle[curr_row][curr_col-1]==1){
        if(check_path(rectangle,col,row,curr_row,curr_col-1)){
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
    
    if(curr_col-1>=0 && curr_row+1<=row && rectangle[curr_row][curr_col-1]==1){
        if(check_path(rectangle,col,row,curr_row,curr_col-1)){
            return true;
        }
    }
    return false;
}


string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {

    int **rectangle=new int*[B+1];
    //'X'=> non walkable area
    //'0'=> walkable area;
    
    for(int i=0;i<=B;i++){
        rectangle[i]=new int[A+1];
        for(int j=0;j<=A;j++){
            rectangle[i][j]=1;
        }
    }
    
    for(int i=0;i<C;i++){
        mark_nonwalkable_area(rectangle,A,B,E[i],F[i],D);
    }
    
    for(int i=0;i<=B;i++){
        for(int j=0;j<=A;j++){
            cout<<rectangle[i][j]<<" ";
        }
        cout<<endl;
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

