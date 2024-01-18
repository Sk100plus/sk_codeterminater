#include<bits/stdc++.h>
using namespace std;
 
// This class represents a directed graph using
// adjacency list representation
class Graph {
 
 
    // Pointer to an array containing adjacency lists
 unordered_map<int,list<int>> adj;
 
public:
    // Constructor
    // Graph(int V);
 
    // Function to add an edge to graph
    void insert(int v, int w,bool direction);
 
    // Prints BFS traversal from a given source s
    void DFS(int s,int x);
    void bfs(int n,vector<vector<int>> &adj,vector<int> &ans);
};
 

void Graph::insert(int u,int v,bool direction){
// direction==0 undirected graph;
// dire ction ==1 directed graph
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            }
}
   
    void Graph::DFS(int s,int Nnode){
        
vector<bool> vis(Nnode,false);
queue<int> q;
q.push(s);
vis[s]=true;
while(!q.empty()){
    int val=q.front();
    q.pop();
    cout<<val<<" ";
    for(auto pr:adj[val]){
if(!vis[pr]){
    vis[pr]=true;
    q.push(pr);
    break;
}
    }
}
            }
    
int main(){
    Graph gp;
    gp.insert(0,2,0);
    gp.insert(2,1,0);
    gp.insert(1,3,0);
    gp.insert(3,4,0);
    gp.insert(4,2,0);
    gp.DFS(0,5);
    return 0;
}