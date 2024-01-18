// here array is given in which first and last element are neighbour to each other
// so find maximum sum of non_Adjacent element.

// Approach 
// ans1=leave first element and find max sum of remain non_Adj
// ans2=leave second element and find max sum of remain non_Adj
// Now find max(ans1,ans2);
#include<bits/stdc++.h>
using namespace std;
int MaxRobber1(vector<int>& vec,int ind,vector<int> &dp){
if(ind==0)return vec[ind];
if(ind<0)return 0;
if(dp[ind]!=-1)return dp[ind];
int pick=vec[ind]+MaxRobber1(vec,ind-2,dp);
int notpick=MaxRobber1(vec,ind-1,dp);
return dp[ind]=max(pick,notpick);
}
int num(vector<int> &nums) {
    int prev = nums[0];
    int prev1 = 0;
    for (int i = 1; i < nums.size(); i++) {
        int t = nums[i];
        if (i > 1) t += prev1;
        int no = nums[i - 1];
        int curr = max(t, no);
        prev1 = prev;
        prev = curr;
    }
    return prev;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<int> vec1,vec2;
    for(int i=1;i<n;i++)vec1.push_back(vec[i]);
    for(int i=0;i<n-1;i++)vec2.push_back(vec[i]);
    vector<int> dp(vec1.size(),-1);
     vector<int> dp1(vec2.size(),-1);
    cout<<max(MaxRobber1(vec2,vec2.size()-1,dp1),MaxRobber1(vec1,vec1.size()-1,dp));
    return 0;
}
