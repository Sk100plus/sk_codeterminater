#include <iostream>
#include <vector>
using namespace std;

int ObstacleUniquePath(vector<vector<int>> &vec, int n, int m, vector<vector<int>> &dp) {
    if ((vec[n][m] == -1 && n>=0 && m>=0) || n < 0 || m < 0) return 0;
    if (n == 0 && m == 0) return 1;
    if (dp[n][m] != -1) return dp[n][m];
    dp[n][m] = ObstacleUniquePath(vec, n - 1, m, dp) + ObstacleUniquePath(vec, n, m - 1, dp);
    return dp[n][m];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m, -1));

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }
    // ************TABULATION METHOD************
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(vec[i][j]==-1)dp[i][j]=0;
        else if(i==0&&j==0)dp[i][j]=1;
        else{
            int up=0,left=0;
           if(i>0) up=dp[i-1][j];
           if(j>0) left=dp[i][j-1];
            dp[i][j]=up+left;
        }
    }
}
cout<<dp[m-1][n-1]<<endl;
    cout << ObstacleUniquePath(vec, n - 1, m - 1, dp);

    return 0;
}
