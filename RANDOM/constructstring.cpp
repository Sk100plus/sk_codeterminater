// Input
// 3
// 6
// aaabbb
// 7
// abbbbbc
// 4
// abcd
// OUTPUT
// ab
// abc
// abcd
// EACH ODD TIMES OCCURANCE OF A CHARACTER WILL BE CONVERT INTO ONES TIME AND FOR EVEN NUMBER OF OCCURANCE INTO TWO TIMES

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int t;
	    cin>>t;
	    string s;
	    cin>>s;
	    int c=1;
	    for(int i=0;i<t;i++){
	        if(s[i]==s[i+1]){c++;}
	        else{
	            //cout<<s[i];c=0;
	            if(c%2==0){
                    cout<<string(2,s[i]);
                    }
	            else {
                    cout<<s[i];
                    }
	            c=1;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}