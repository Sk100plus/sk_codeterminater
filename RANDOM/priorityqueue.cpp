// USE OF PIORITY QUEUE : A QUEUE IN WHICH ELEMENT ARE ARRANGED IN FORM OF THEIR PRIORITY VALUE 
// HEIGHEST ELEMENT ARE AT TOP MOST AND LOWEST ONE IS AT LOWEST MOST;

// QUESTION :
// IF INPUT IS -1 THEN OUTPUT THE MAXIMUM ELEMENT AMONG THE PREVIOUS INPUT;

#include <iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int o=n+m;
	 priority_queue<int> initial;
	while(o--){
	    int a;
	    cin>>a;
	  if(a>0){
	      initial.push(a);
	  }
	  else{
	      cout<<initial.top()<<endl;
	      initial.pop();
	  }
	    
	   
	}
	
	return 0;
}

// EXAMPLE
// ###Sample Input

// 10 3
// 1 
// 3 
// 7 
// 6 
// -1 
// 5 
// -1 
// 18 
// 9 
// 11
// 2
// -1
// 4

// ### OUTPUT
// 7
// 6
// 18