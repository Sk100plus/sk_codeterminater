#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTriangles(vector<int>& sticks) {
    sort(sticks.begin(), sticks.end());

    int count = 0;
    int n = sticks.size();

    // Initialize a 2D DP array with zeros
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = n - 3; i >= 0; --i) {
        int k = i + 2;

        for (int j = i + 1; j < n - 1; ++j) {
            while (k < n && sticks[i] + sticks[j] > sticks[k]) {
                ++k;
            }

            // Update DP table
            dp[i][j] = max(0, k - j - 1);

            // Accumulate count
            count += dp[i][j];
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        vector<int> stick(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            stick[i] = 1 << vec[i];
        }

        cout << countTriangles(stick) << endl;
    }

    return 0;
}
