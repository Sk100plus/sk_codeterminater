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
    void detectC(int i);
};
 

void Graph::insert(int u,int v,bool direction){
// direction==0 undirected graph;
// dire ction ==1 directed graph
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            }
}
   
   bool isCircle(int src,unordered_map<int,list<int>> &adj,unordered_map<int,bool>&vis){
unordered_map<int,int> parent;
parent[src]=-1;
vis[src]=true;
queue<int> q;
q.push(src);
while(!q.empty()){
    int front=q.front();
    q.pop();
    for(auto neighbour:adj[front]){
        // anyother element is parent of neighbour and neighbour aready visited then cycle will be present
        if(vis[neighbour]==true&&neighbour!=parent[front])
        return true;
        else if(!vis[neighbour]){
            q.push(neighbour);
            vis[neighbour]=true;
            parent[neighbour]=front;
                    }
    }
}
return false;
   }
   void Graph::detectC(int n){
unordered_map<int,bool> vis(false);
// this for loop come for possibility of two or more component
// for(int i=0;i<n;i++){
// if(!vis[n]){
    bool ans=isCircle(1,adj,vis);
    if(ans){
    cout<<"Cycle is present"<<endl;   
return;
    // }
}
// }
cout<<"Cycle is not present"<<endl;
return;
   }
 
//  Using DFS detect of cycle 
// IF ELEMENT IS VISITED AND ITS PARENT ALREADY EXIST THEN CYCLE WILL BE PRESENT OR NOT !!!!


          bool isCycleDFS(int node,int parent,unordered_map<int,bool>& vis,unordered_map<int,list<int>>& adj){
    vis[node]=true;
    for(auto neighbour:adj[node]){
        if (!vis[neighbour]) {
            bool cycle = isCycleDFS(neighbour, node, vis, adj);
            if (cycle)
                return true;
        }
           else if(neighbour!=parent){
return true;
           }
        
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    unordered_map<int,list<int>> adj;
     for(int i=0;i<m;i++){
         int u=edges[i][0];
         int v=edges[i][1];
         adj[u].push_back(v);
         adj[v].push_back(u);
     }
unordered_map<int,bool> vis;
     for(int i=0;i<n;i++){
         if(!vis[i]){
             bool ans=isCycleDFS(i,-1,vis,adj);
             if(ans==1)
             return "Yes";
         }
     }
     return "No";
}  
    
int main(){
    Graph gp;
    gp.insert(1,2,0);
    gp.insert(2,3,0);
    gp.insert(1,3,0);
    // gp.insert(6,8,0);
    // gp.insert(4,2,0);
    gp.detectC(1);
   
    return 0;
}