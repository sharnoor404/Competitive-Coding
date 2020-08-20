/*
Flattening a linked list : GFG
*/
Node *merge(Node *a,Node *b){
    Node *result;
    if(a==NULL){
        return b;
    }else if(b==NULL){
        return a;
    }else{
        if(a->data<b->data){
            result=a;
            result->bottom=merge(a->bottom,b);
        }else{
            result=b;
            result->bottom=merge(a,b->bottom);
        }
        return result;
    }
}
    
    
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL){
       return root;
   }
   return merge(root,flatten(root->next));
}

