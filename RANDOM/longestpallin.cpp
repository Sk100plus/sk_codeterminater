// finding longest substring pallindrome in a string.
#include <iostream>
#include<string>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std;
int maximumsize(vector<string> curr){
    int len=-1;
    for(int i=0;i<curr.size();i++){
        int p=curr[i].size();
        if(len<p){
            len=p;
        }
    }
    return len;
}
void print(vector<string> curr,int answer){
    for(int i=0;i<curr.size();i++){
        if(answer==curr[i].size()){
            cout<<answer<<endl;
            cout<<curr[i];
            return;
        }
    }
}
void pallindrome(string s){
    vector<string> curr;
for(int i=0;i<s.length();i++){
    for(int j=s.length();j>=1;j--){
        string st=s.substr(i,j);
        string ansmain=st;
         reverse(st.begin(),st.end());
        if(ansmain==st){
            curr.push_back(ansmain);
        }
    }
 
}
   int answer=maximumsize(curr);
    print(curr,answer);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	string s;
	cin>>s;
	pallindrome(s);
	
	return 0;
}