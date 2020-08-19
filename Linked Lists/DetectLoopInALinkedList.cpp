/*
Detect loop in a linked list : GFG
*/
#include<unordered_map>
bool detectLoop(Node* head)
{
   unordered_map<Node*,bool> ourmap;
   bool flag=false;
   while(head!=NULL){
       if(ourmap.count(head)==0){
           ourmap[head]=true;
       }else{
           flag=true;
           break;
       }
       head=head->next;
   }
   
   if(flag){
       return true;
   }else{
       return false;
   }
}

