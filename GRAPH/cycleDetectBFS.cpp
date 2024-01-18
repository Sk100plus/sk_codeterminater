#include<bits/stdc++.h>
using namespace std;
int detect(int n,vector<pair<int,int>> &edges){
unordered_map<int,list<int>> adj;
for(int i=0;i<edges.size();i++){
    int u=edges[i].first;
    int v=edges[i].second;
    adj[u].push_back(v);
}
vector<int> indeg;
for(auto i:adj){
    for(auto j:i.second){
        indeg[j]++;
    }
}
queue<int> q;
for(int i=0;i<=n;i++){
    if(indeg[i]==0)q.push(i);
}
int cnt=0;
while(!q.empty()){
    int front=q.front();
    q.pop();
    cnt++;
    for(auto pr:adj[front]){
indeg[pr]--;
if(indeg[pr]==0)
q.push(pr);
    }
}
// If cnt==n then it is acyclic and its topological sort is possible 

return cnt==n?0:1;
}