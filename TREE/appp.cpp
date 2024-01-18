#include<bits/stdc++.h>
using namespace std;
void missingInteger(vector<int> &nums){
 map<int,int> mp;
        int sum=nums[0];int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                c++;
                }
            else{
                // cout<<c<<" ";
                if(mp[sum]<c)
                mp[sum]=c;
                c=1;
                sum=nums[i];
            }
        }
        mp[sum]=c;
        int maxi=-1,ans=-1;
        for(auto pr:mp){
            // if(pr.second>maxi){
            //     maxi=pr.second;
            //     ans=pr.first;
            // }
            cout<<pr.first<<" "<<pr.second<<endl;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(ans==nums[i])ans++;
        }
}
int main(){
    int a=2,b=3;
    int res=2^0^2^0;
cout<<res;
return 0;
}