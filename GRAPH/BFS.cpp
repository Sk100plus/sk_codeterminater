// BREADTH FIRST SEARCH
#include <bits/stdc++.h>
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
    void BFS(int s);
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
 
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    set<int> st;
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
   st.insert(s);
    queue.push_back(s);
 
    while (!queue.empty()) {
 
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        for (auto adjacent : adj[s]) {
            if (st.find(adjacent)==st.end()) {
                st.insert(adjacent);
                queue.push_back(adjacent);
            }
        }
    }
}
 

 void Graph::bfs(int n,vector<vector<int>> &adj,vector<int> &ans){
// STARTING NODE IS n;
    int node=n;
queue<int> q;
// x is the number of nodes
int x=5;
vector<bool> visited(x,false);
q.push(node);
visited[node]=true;
while(!q.empty()){
    int val=q.front();
    q.pop();
    ans.push_back(val);
    for(auto pr:adj[val]){
        if(!visited[pr]){
            visited[pr]=true;
            q.push(pr);
        }
    }
}

 }
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g;
    g.insert(0, 3,0);
    g.insert(3, 1,0);
    g.insert(1, 4,0);
    g.insert(4, 2,0);
    g.insert(2, 0,0);
    // g.insert(3, 3,0);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(3);
 
    return 0;
}