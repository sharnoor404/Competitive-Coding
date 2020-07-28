/*
Reverse contents of a queue in O(N)
*/
queue<long long int> rev(queue<long long int> q)
{
    stack<long long int> store;
    while(q.size()!=0){
        store.push(q.front());
        q.pop();
    }
    while(!store.empty()){
        q.push(store.top());
        store.pop();
    }
    return q;
}
