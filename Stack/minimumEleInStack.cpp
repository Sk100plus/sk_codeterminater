#include<bits/stdc++.h>
using namespace std;
// Here we find minimum element in time complexity of O(1) and space complexity O(1);

int main(){
   int n;
   cin>>n;
  
   stack<int> st;
   int mini=INT_MAX;
   for(int i=0;i<n;i++){
    int p;
    cin>>p;
mini=min(mini,p);
st.push(p);
   }
   cout<<mini;
    return 0;
}