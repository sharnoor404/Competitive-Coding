/*
Detect loop in a linked list : GFG
*/

//Approach 1:
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

//Approach 2:

bool detectLoop(Node* head)
{
    //turtle hare problem
    Node* turtle=head;
    Node* hare=head;
    while(turtle!=NULL && hare!=NULL){
        hare=hare->next;
        turtle=turtle->next;
        if(hare!=NULL){
            hare=hare->next;
        }
        if(turtle==hare){
            //point which indicates that loop exists
            return true;
        }
    }
    return false;
}


