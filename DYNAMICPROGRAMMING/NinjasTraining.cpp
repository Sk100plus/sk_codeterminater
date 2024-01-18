// here a two-d matix given of size n*3;
// now u select each element from each row and add it to sum and maximise the value of sum
// A condtion occur suc that if u choose Arr[i][1] then u can not choose Arr[i+1][1];

// !!!!!!!!!!!!!!!Maximise the value of Sum!!!!!!!!!!!!!!!!
#include<bits/stdc++.h>
using namespace std;
int NinjaTraining(int day,int last,vector<vector<int>>& vec,vector<vector<int>> &dp){
    if(day==0){
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(i!=last)
            maxi=max(maxi,vec[day][i]);
        }
        return maxi;
    }
    if(dp[day][last]!=-1)return dp[day][last];
    int maxi=0;
    for(int i=0;i<=2;i++){
        int point;
        if(i!=last){
         point=vec[day][i]+NinjaTraining(day-1,i,vec,dp);
         maxi=max(maxi,point);
        }
    }
    return dp[day][last]=maxi;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        vec.push_back({a,b,c});
    }
    vector<vector<int>> dp(n,vector<int>(4,-1));
    int last=3;
    int day=n-1;
    cout<<NinjaTraining(day,last,vec,dp);
    return 0;

}