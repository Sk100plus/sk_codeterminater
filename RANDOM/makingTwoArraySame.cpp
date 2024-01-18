// YOU ARE GIVEN TWO ARRAY A AND B BY USING BITWISE OR OPERATOR YOU MAKE BOTH ARRAY SAME
// CHOOSE THREE INDEXES  I,J,K AND MAKE ARRAY A ELEMENT SAME TO THAT OF B IF POSSIBLE.


#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    vector<int> b;
	    int c1=0,c2=0;
	    for(int i=0;i<n;i++){
	        int s;
	        cin>>s;
	        a.push_back(s);
	        if(a[i]==0)c1++;
	        else c2++;
	    }
	     for(int i=0;i<n;i++){
	         int s;
	        cin>>s;
	        b.push_back(s);
	       
	    }
               if(a[0]!=b[0])
               cout<<"NO"<<endl;
               else if(a[n-1]!=b[n-1])
               cout<<"NO"<<endl;
              else{
                  for(int i=1;i<n-1;i++){
                   if(a[i]!=b[i] && a[i]==0 && c2==0){
                        cout<<"NO"<<endl;
                        break;
                   }
                   else if(a[i]!=b[i] && a[i]==1){
                        cout<<"NO"<<endl;
                        break;
                   }
                   else{
                       if(i==n-2)
                       cout<<"YES"<<endl;
                   }
               }
               
              } 
	        
	    
	}
	return 0;
}
