#include<bits/stdc++.h>
using namespace std;
void insertE(vector<int> &vec,int pos,int index,int ele){
    for(int i=index;i>=pos;i--){
        vec[i+1]=vec[i];
    }
    vec[pos]=ele;
}
int main(){
    int t;
    cin>>t;
    vector<int> vec(2*t);
    for(int i=0;i<t;i++){
        cin>>vec[i];
    }
    int ele;
    cin>>ele;
    int position;
    cin>>position;
    insertE(vec,position-1,t-1,ele);
    for(int i=0;i<t+1;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}