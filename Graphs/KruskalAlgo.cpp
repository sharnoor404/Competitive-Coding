/*
Kruskal Algorithm implementation using union find algorithm
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class edge{
  public:
    int source;
    int destination;
    int weight;
};

bool comp(edge a,edge b){
    return a.weight<b.weight;
}

int find_highest_parent(vector<int> parent,int child){
    while(parent[child]!=child){
        child=parent[child];
    }
    return child;
}

int main()
{
  int V, E;
  cin >> V >> E;
	
    vector<edge> input(E);
    vector<edge> output;
    vector<int> parent(V);
    for(int i=0;i<V;i++){
        parent[i]=i;
    }
    for(int i=0;i<E;i++){
        edge e;
        cin>>e.source>>e.destination>>e.weight;
      	input.push_back(e);
    }
    sort(input.begin(),input.end(),comp);
    int count=0;
    
    for(int i=0;i<input.size();i++){
        //find highest parent;
        int parent_1=find_highest_parent(parent,input[i].source);
        int parent_2=find_highest_parent(parent,input[i].destination);
        if(parent_1!=parent_2){
            count++;
            output.push_back(input[i]);
            parent[parent_1]=parent_2;
            
        }
        if(count==V-1){
            break;
        }
        
    }
  
	for(int i=0;i<output.size();i++){
        if(output[i].source<output[i].destination){
            cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
        }else{
            cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl;
        }
        
    }
}

