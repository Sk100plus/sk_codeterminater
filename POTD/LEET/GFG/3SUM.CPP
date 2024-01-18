#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void threeSum(vector<int> nums) {
        vector<vector<int>> vec;
       set<vector<int>> s;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-2;i++){
           int j=i+1;
           int k=nums.size()-1;
           while(j<k){
               if(nums[i]+nums[j]+nums[k]==0){
                   s.insert({nums[i],nums[j],nums[k]});
                   j++;
                   k--;
               }
               else if(nums[i]+nums[j]+nums[k]<0)
               j++;
               else k--;
           }

       }
       for(auto tri:s){
           vec.push_back(tri);
       }
        for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec.size()+1;j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
    }
};
int main(){
    Solution s;
    int n;cin>>n;
    vector<int>vac(n);
    for(int i=0;i<n;i++){
        cin>>vac[i];
    }
    vector<vector<int> > vec;
    s.threeSum(vac);

    return 0;
}