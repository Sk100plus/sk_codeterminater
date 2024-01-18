#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int,bool> vis;
    unordered_map<int,int> parent;
    queue<int> q;
    parent[s]=-1;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto i:adj[front]){
            if(!vis[i]){
                vis[i]=true;
                parent[i]=front;
                q.push(i);
            }
        }
    }
    vector<int> ans;
    // t is target
    int curr=t;
    ans.push_back(t);
    while(curr!=s){
        curr=parent[curr];
        ans.push_back(curr);
    }
    return ans;
}