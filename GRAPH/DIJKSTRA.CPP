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
 
 vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    // Create adjacencey list
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    vector<int> dist(vertices);
    for(int i=0;i<vertices;i++){
        dist[i]=INT_MAX;
    }
    set<pair<int,int>> st;
    dist[source]=0;
    st.insert(make_pair(0,source));
    while(!st.empty()){
        auto top=*(st.begin());
        int nodeDist=top.first;
        int topNode=top.second;
        st.erase(st.begin());
// traverse neighbour
for(auto neighbour:adj[topNode]){
  if (nodeDist + neighbour.second < dist[neighbour.first]) {
    auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
    if (record != st.end())
      st.erase(record);

    dist[neighbour.first] = nodeDist + neighbour.second;
    st.insert(make_pair(dist[neighbour.first], neighbour.first));
  }
}

    }
    return dist;
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