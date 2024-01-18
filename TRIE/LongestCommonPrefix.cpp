#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<string> vec;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        vec.push_back(s);
    }
    vector<char> ans;string s1=vec[0];
for(int i=0;i<s1.length();i++){
    char ch=s1[i];
    bool make=true;
    for(int j=1;j<vec.size();j++){
        string s2=vec[j];
        if(ch!=s2[i]||s2.size()<i){
make=false;
        }
    }
    if(make==true){
        ans.push_back(ch);
    }
    else break;
}

for(int i=0;i<ans.size();i++)
cout<<ans[i];
    return 0;
}