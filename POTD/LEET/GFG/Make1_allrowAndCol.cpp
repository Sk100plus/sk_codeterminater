// Given a boolean matrix of size RxC 
// where each cell contains either 0 or 1, 
// modify it such that if a matrix cell matrix[i][j] 
// is 1 then all the cells in its ith row and jth column will become 1.
// Example: 1 0
        //  0 0
        // Output: 1 1
        //         1 0


#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
               unordered_set<int>row;
        unordered_set<int>col;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(matrix[i][j] == 1){
                     row.insert(i);
                     col.insert(j);
                 }
            }
        }
        for(auto i:row){
            for(int j=0;j<m;j++){
                  matrix[i][j]=1;
            }
        }
        for(auto j:col){
            for(int i=0;i<n;i++){
                  matrix[i][j]=1;
            }
        }
    }
};
int main(){
    Solution s1;
    
    return 0;

}
        