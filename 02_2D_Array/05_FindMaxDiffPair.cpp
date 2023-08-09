// https://practice.geeksforgeeks.org/problems/maximum-difference-between-pair-in-a-matrix/1

int findMaxValue(vector<vector<int>> &mat, int N)
{
    // Write your code here
    if (N == 1)
        return mat[0][0];
    vector<vector<int>> dp(N, vector<int>(N));
    int mn = INT_MAX;
    for (int i = 0; i < N; ++i)
    {
        mn = min(mn, mat[i][0]);
        dp[i][0] = mn;
    }
    int ans = INT_MIN;
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j == 0)
            {
                dp[j][i] = min(dp[j][i - 1], mat[j][i]);
            }
            else
            {
                dp[j][i] = min(min(dp[j][i - 1], mat[j][i]), dp[j - 1][i]);
            }
        }
        int mx = INT_MIN;
        for (int j = N - 1; j > 0; --j)
        {
            mx = max(mx, mat[j][i]);
            ans = max(ans, mx - dp[j - 1][i - 1]);
        }
    }
    return ans;
}