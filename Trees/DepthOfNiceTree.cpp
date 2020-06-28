/*
A rooted binary tree is called “nice”, if every node is either a leaf, or has exactly two children.
Given the pre-order traversal of a nice binary tree as a string, you are required to find the depth of the tree.
*/
int depth(char str[]) {
    if(str[0]=='l'){
        return 0;
    }
    int max_height=1;
    int height=1;
    for(int i=1;str[i]!='\0';i++){
        if(str[i]=='l'){
            if(height>max_height){
                max_height=height;
            }
            height=1;
        }else{
                height++;
            }
        
    }
   return max_height; 
}

