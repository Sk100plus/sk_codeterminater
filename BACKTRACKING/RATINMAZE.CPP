#include<bits/stdc++.h>
using  namespace std;
bool isSafe(int nx,int ny,vector<vector<bool>>& vis,vector<vector<int>>& arr,int n){
    if((nx>=0&&nx<n)&&(ny>=0&&ny<n)&&vis[nx][ny]!=1&&arr[nx][ny]==1)return true;
    return false;
}
void solve(int x,int y,vector<vector<bool>>& vis,
vector<vector<int>>& arr,int n,string path,vector<string>& ans){
    if(x==n-1&&y==n-1){
ans.push_back(path);
return;
    }
    vis[x][y]=1;

    //Lexicographically order printing so insertion as  (D L R U) 

    // Down
    if(isSafe(x+1,y,vis,arr,n)){
        solve(x+1,y,vis,arr,n,path+'D',ans);
    }
    // Left
     if(isSafe(x,y-1,vis,arr,n)){
        solve(x,y-1,vis,arr,n,path+'L',ans);
    }
    // Right
     if(isSafe(x,y+1,vis,arr,n)){
        solve(x,y+1,vis,arr,n,path+'R',ans);
    }
    // Up
     if(isSafe(x-1,y,vis,arr,n)){
        solve(x-1,y,vis,arr,n,path+'U',ans);
    }
    vis[x][y]=0;
}
vector<string> solving(vector<vector<int>>& arr,int n){
    vector<string> ans;
    if(arr[0][0]==0)return ans;
    vector<vector<bool>> visited(n,vector<bool>(0,n));
    string path="";
 solve(0,0,visited,arr,n,path,ans);
 return ans;
}
int main(){
    int n;cin>>n;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        vector<int> veci(n);
        for(int j=0;j<n;j++){
            cin>>veci[j];
        }
        vec.push_back(veci);
    }
    vector<string > veci=solving(vec,n);
    for(int i=0;i<veci.size();i++){
        cout<<veci[i]<<" ";
    }
    return 0;

}