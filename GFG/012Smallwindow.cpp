#include<bits/stdc++.h>
using namespace std;
bool solve(int win,string st){
    map<char,int> mp;
    for(int i=0;i<win;i++){
        mp[st[i]]++;
    }
    if(mp.size()==3)return true;
    for(int j=win;j<st.length();j++){
        if(mp[st[j-win]]==1)mp.erase(st[j-win]);
        else mp[st[j-win]]--;
        mp[st[j]]++;
        if(mp.size()==3)return true;
    }
return false;
}
int answer(string st){
    int win=3;
    while(win<=st.length()){
        if(solve(win,st))return win;
        win++;
    }
    return -1;
}
int main(){
string st;
cin>>st;
cout<<answer(st);
    return 0;
}