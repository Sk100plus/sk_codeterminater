#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallestElement(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1&&arr[s.top()]>=curr){
            s.pop();
        }
        arr[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallestElement(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1&&arr[s.top()]>=curr){
            s.pop();
        }
        arr[i]=s.top();
        s.push(i);
    }
    return ans;
}
int solvehisto(vector<int> &v){
int n=v.size();
vector<int> next(n);
next=nextSmallestElement(v,n);
vector<int> prev(n);
prev=prevSmallestElement(v,n);
int area=INT_MIN;
for(int i=0;i<n;i++){
    int l=v[i];
    
    if(next[i]==-1){
        next[i]=n;
    }
    int b=next[i]-prev[i]-1;
    int newArea=l*b;
    area=max(area,newArea);
}
return area;
}
int main(){
    vector<int> v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
   int answer= solvehisto(v);
cout<<answer;
    return 0;

}