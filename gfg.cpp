#include<bits/stdc++.h>
using namespace std;
int main(){
   map<int,int> up;
   up[4]=1;
   
   up[-5]=1;
   up[1]=1;
 map <int,int> :: iterator it=up.begin();
   while(it!=up.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
   }
    return 0;
}