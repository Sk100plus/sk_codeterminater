// Abhineet the Chess master of NIT Kurukshetra got bored 
// of 8x8 chess board and invented the new variation of Chess, 
// the one on an infinite chess board. There is only a white king and 
// N black knights. The white king has to avoid checkmate as long as 
// it can.

// A situation is given. Determine if white king is in checkmate or not.
//  The white king is in checkmate if and only if it is in check and 
//  it is not able to move to any of its neighboring positions which 
//  is not in check.


// ###Input:

// The first line will contain 
// T, number of test cases. Then the test cases follow.
// The first line of each test case contains a single integer N.
// The next N line contains 2 space-separated integers 
// Xi and Yi denoting the position of knights.
// The next line contains 2 space-separated integers 
// A and B denoting the position of king

// ###Output: Print a single line corresponding to each test case — “YES” (without quotes) – if the king is in checkmate and “NO” (without quotes) – if the king is not in checkmate.


#include <bits/stdc++.h>
using namespace std;
void fun(vector<int> &xaxis,vector<int> &yaxis,int a,int b){
     for(int i=0;i<xaxis.size();i++){
  	if((a+2)==xaxis[i] && (b+1)==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a+1)==xaxis[i] && (b+2)==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a-2)==xaxis[i] && b+1==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a-1)==xaxis[i] && b+2==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a+2)==xaxis[i] && (b-1)==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a+1)==xaxis[i] && (b-2)==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a-2)==xaxis[i] && (b-1)==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	else if((a-1)==xaxis[i] && (b-2)==yaxis[i]){
  		cout<<"YES\n";
  		return;
  	}
  	
  }
  cout<<"NO\n";
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v1(n),v2(n);
	    for(int i=0;i<n;i++){
	        cin>>v1[i]>>v2[i];
	    }
	    int a,b;cin>>a>>b;
	    fun(v1,v2,a,b);
	}
	return 0;
}
