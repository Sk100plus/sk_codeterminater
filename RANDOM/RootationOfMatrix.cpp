#include<bits/stdc++.h>
using namespace std;
 void Rotate(vector<vector<int>> &vec){
  int rows=vec.size();
  for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
      swap(vec[i][j],vec[j][i]);
    }
  }
  for(int i=0;i<rows;i++)
  reverse(vec[i].begin(),vec[i].end());
 }
int main(){
   int n;
   cin>>n;
   vector<vector<int>> vec;
   for(int i=0;i<n;i++){
    vector<int> vec1(n);
    for(int j=0;j<n;j++){
        cin>>vec1[j];
    }
    vec.push_back(vec1);
   }
   Rotate(vec);
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}