// Find any subarray with sum is 0 in an array !
#include<bits/stdc++.h>
using namespace std;
string isZeroSum(vector<int> &vec,int n){
    set<int> st;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=vec[i];
        if(sum==0||st.find(sum)!=st.end())return "Yes";
        st.insert(sum);
    }
    return "NO";
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<isZeroSum(vec,n)<<endl;
    return 0;
}