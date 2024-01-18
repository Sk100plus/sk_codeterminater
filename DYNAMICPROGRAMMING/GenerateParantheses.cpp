#include<bits/stdtr1c++.h>
using namespace std;
void solve(vector<string> &ans,int open,int close,string st){
    if(open==0&&close==0){
        ans.push_back(st);
      return;
    }
    if(open!=0){
         string st1=st;
        st1.push_back('(');
    solve(ans,open-1,close,st1);
    }
    if(open<close){
        string st1=st;
        st1.push_back(')');
        solve(ans,open,close-1,st1);
    }

}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=n;
        int close=n;
        string st="";
         solve(ans,open,close,st);
         return ans;
    }
int main(){
    int n;
    cin>>n;
vector<string > st=generateParenthesis(n);
for(int i=0;i<st.size();i++)
cout<<st[i]<<" ";
    return 0;
    
}