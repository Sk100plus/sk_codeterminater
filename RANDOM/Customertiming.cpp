// There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] 
// is the start time of meeting i and F[i] is the finish time of meeting i. The task is to find the maximum 
// number of meetings that can be accommodated in the meeting room. You can accommodate a meeting if the start 
// time of the meeting is strictly greater than the finish time of the previous meeting. Print all meeting numbers.

// Note: If two meetings can be chosen for the same slot then choose meeting with smaller index in the given array.

// Example 1:

// Input:
// N = 6
// S = {1,3,0,5,8,5}
// F = {2,4,6,7,9,9} 
// Output:
// {1,2,4,5}
// Explanation:
// We can attend the 1st meeting from (1 to 2), then the 2nd meeting from (3 to 4), 
// then the 4th meeting from (5 to 7), and the last meeting we can attend is the 
// 5th from (8 to 9). It can be shown that this is the maximum number of meetings we can attend.
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,int>> vc;
        for(int i=0;i<N;i++){
            vc.push_back(make_pair(F[i],i+1));
        }
        vector<int> ans;
sort(vc.begin(),vc.end());
ans.push_back(vc[0].second);
int last=vc[0].first;
    for(int i=0;i<vc.size();i++){
        if(S[vc[i].second-1]>last){
    ans.push_back(vc[i].second);
    last=vc[i].first;
        }
}
sort(ans.begin(),ans.end());
return ans;
}
};
