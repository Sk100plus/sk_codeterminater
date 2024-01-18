#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
    public:
    unordered_map<T,list<T>> adj;
    void insert(int u,int v,bool direction){
// direction==0 undirected graph;
// dire ction ==1 directed graph
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            }
    }
    void print(){
for(auto pr:adj){
    cout<<pr.first<<"->";
for(auto j:pr.second){
    cout<<j<<" ";
}
cout<<endl;
}
    }
};
int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edes"<<endl;
    cin>>m;
    Graph<int> gp;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        gp.insert(u,v,0);
    }
    
   
    gp.print();
    return 0;

}