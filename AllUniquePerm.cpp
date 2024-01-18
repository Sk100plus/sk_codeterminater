#include<bits/stdc++.h>
using namespace std;
// ************USING INBUILT FUNCTION ****************
vector<vector<int>> uniquePerms(vector<int>& arr, int n) {
   vector<vector<int>> result;

    sort(arr.begin(), arr.end());

    do {
        result.push_back(arr);
    } while (next_permutation(arr.begin(), arr.end()));

    return result;
}
// **********USING BRUTE FORCE*************
vector<vector<int>> solve(vector<int> &vec,int n){
    set<vector<int>> st;
    
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<vector<int>> veca=uniquePerms(vec,n);
    for(int i=0;i<n;i++){
        vector<int> veci=veca[i];
        for(int j=0;j<n;j++)
        cout<<veci[i];
    }
    return 0;
}