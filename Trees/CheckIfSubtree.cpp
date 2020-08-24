 /*
 Given 2 binary trees S and T,
 Check if S is a subtree of T : GFG
 */
bool match_tree(Node* t,Node* s){
    if(t==NULL && s==NULL){
        return true;
    }else if((t==NULL && s!=NULL) || (t!=NULL && s==NULL)){
        return false;
    }
    if(t->data!=s->data){
        return false;
    }
    
    return (match_tree(t->left,s->left) && match_tree(t->right,s->right));
    
}

 
 bool findInT(Node* t,Node* s){
    if(t==NULL){
        return false;
    }
    if(t->data==s->data){
       if(match_tree(t,s)){
           return true;
       }
    }
    bool fromLeft=findInT(t->left,s);
    
   if(fromLeft==true){
       return fromLeft;
   }else{
       return findInT(t->right,s);
   }
}

bool isSubTree(Node* T, Node* S) {
    //to check if S is a subtree of T(1=true and 0=false);
    //step 1: find node S->root
    if(S==NULL){
        return true;
    }
    Node* t=T;
    Node* s=S;

   return findInT(t,s);

}
