//  226 can be decode as:(BBF,VF,BZ)
// 1423 can be (1,4,2,3),(1,4,23),(14,23),(14,2,3)
// these all are possible cases

// If any leading 0 comes such that two digit become greater than 26 then it will be invalid case
// If s[0] contain 0 then it also will be invalid case



// APPROACH : Each value is depend on previous two case 

#include<bits/stdc++.h>
using namespace std;
int numDecoding(string s){
    if(s[0]=='0'||s.length()==0)return 0;
    if(s.length()==1)return 1;
    int c1=1; //previous of previous Value
    int c2=1;  // Previous value
    for(int i=1;i<s.length();i++){
        int c=0;
        int d=s[i]-'0';
        int dd=(s[i-1]-'0')*10+d;
        if(d>0)c+=c2;
        if(dd>=10&&dd<=26)c+=c1;
        c1=c2;
        c2=c;
    }
    return c2;
}
int main(){
    string s;
    cin>>s;
    cout<<numDecoding(s);
}