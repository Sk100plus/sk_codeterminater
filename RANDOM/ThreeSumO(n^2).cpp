#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& vec,int n,int k){
    vector<vector<int>> ans;
    sort(vec.begin(),vec.end());
    set<vector<int>> output;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int p=n-1;
        int sum=k-vec[i];
        while(j<p){
                if(vec[j]+vec[p]<sum)
                j++;
                else if(vec[j]+vec[p]>sum)
                p--;
                else {
                    output.insert({vec[i],vec[j],vec[p]});
                    j++;p--;
                }
        }
    }
    for(auto pr:output){
        ans.push_back(pr);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int k;
    cin>>k;
    solve(vec,n,k);
    return 0;
}