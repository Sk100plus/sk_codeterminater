#include<bits/stdc++.h>
using namespace std;
int main(){
    // This is also called MIN_HEAP
      priority_queue<long long,vector<long long>,greater<long long>> pr;
    pr.push(1);
    pr.push(2);
    pr.push(3);
    pr.push(4);
    int t=pr.size();
    for(int i=0;i<t;i++){
        cout<<pr.top()<<" ";pr.pop();
    }
    return 0;
}