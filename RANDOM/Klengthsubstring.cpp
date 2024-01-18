// Given a string of lowercase alphabets,
//  count all possible substrings (not necessarily distinct) 
//  that have exactly k distinct characters. 
// Total number of substrings are n*(n+1)/2;

// THIS CAN BE SOLVED IN o(N) COMPLEXITY .IDEA IS TO MAINTAIN 
// A HASH TABLE WHILE GENERATING SUBSTRING AND CHECKING THE NUMBER
// OF UNIQUE CHARACTERS USING THAT HASH TABLE
#include<bits/stdc++.h> 
using namespace std;
int solve(string s,int k){
    int count=0;
    int cnt[26];
    for(int i=0;i<s.length();i++){
        int dist=0;
        memset(cnt,0,sizeof(cnt));
        for(int j=i;j<s.length();j++){
                if(cnt[s[j]-'a']==0)
                dist++;
                cnt[s[j]-'a']++;
                if(dist==k)count++;
        }
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    int length;
    cin>>length;
    int ans=solve(s,length);
    cout<<ans;
    return 0;
}


//Another method
 // 	vector<string> vec;
    // 	for(long long  i=0;i<s.length();i++){
    // 	    for(long long  j=1;j<=s.length()-i;j++){
    // 	        if(s.substr(i,j).length()>=k)
    // 	        vec.push_back(s.substr(i,j));
    // 	    }
    // 	}
    // 	long long  count=0;
    // 	for(long long  i=0;i<vec.size();i++){
    // 	    map<char,long long > m;
    // 	    string st=vec[i];long long  count1=0;
    // 	    for(long long  j=0;j<st.size();j++){
    // 	        m[st[j]]++;
    // 	    }
    // 	    for(auto pr:m){
    // 	        count1++;
    // 	    }
    // 	    if(count1==k)count++;
    // 	}
    // 	return count;