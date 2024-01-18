#include<bits/stdc++.h>
using namespace std;
void subseq(int ind,vector<char>& vec,vector<vector<char>>& ch,string s,int n){
    if(ind==n){
        ch.push_back(vec);
        return;
    }
    vec.push_back(s[ind]);
        subseq(ind+1,vec,ch,s,n);
        vec.pop_back();
        subseq(ind+1,vec,ch,s,n);
}
int main(){
    string s;
    cin>>s;
    vector<vector<char>> ch;
    vector<char> vec;
    int n=s.length();
    subseq(0,vec,ch,s,n);
    int c=0;
    map<string,int> mp;
    
for(int i=0;i<ch.size();i++){
  
  if(ch[i].size()==3){
  
    string s,s2;
    s.push_back(ch[i][0]);s.push_back(ch[i][1]);s.push_back(ch[i][2]);
    s2.push_back(s[2]);s2.push_back(s[1]);s2.push_back(s[0]);
    if(s==s2){
        c++;mp[s]++;
    }
  }
}
cout<<c;
    return 0;
}