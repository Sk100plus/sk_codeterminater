#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int Solve(vector<vector<int>> &vec, int i, int j) {
    if (i == 0 && j == 0) return vec[i][j];
    if (i < 0 || j < 0) return INT_MAX;

    // if (dp[i][j] != -1) return dp[i][j];

    int up = vec[i][j] + Solve(vec,  i - 1, j);
    int left = vec[i][j] + Solve(vec, i, j - 1);

         
return min(up, left);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0&&j==0)dp[i][j]=vec[i][j];
            else{
                int up=INT_MAX,left=INT_MAX;
            if(i>0)up=vec[i][j]+dp[i-1][j];
            if(j>0)left=vec[i][j]+dp[i][j-1];
                dp[i][j]=min(up,left);
            }
        }
    }
    cout<<dp[n-1][m-1]<<endl;
    // cout << Solve(vec,  n - 1, m - 1);

    return 0;
}
