// https://practice.geeksforgeeks.org/problems/word-wrap1646/1

int solve(vector<int> &nums, int i, int j, int k, vector<vector<int>> &dp)
{
    int n = nums.size();
    // base case
    if (i > j)
    {
        return 0;
    }
    // memo
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MAX;
    int sum = 0;
    for (int idx = i; idx <= j; idx++)
    {
        sum += nums[idx];
        // no need to calc. spaces for last line
        if (sum <= k && idx == n - 1)
        {
            return dp[i][j] = 0;
        }
        if (sum <= k)
        {
            ans = min(ans, (k - sum) * (k - sum) + solve(nums, idx + 1, j, k, dp));
            sum++; // to handle space minus
        }
    }
    return dp[i][j] = ans; // memo and return
}
int solveWordWrap(vector<int> nums, int k)
{
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return solve(nums, 0, n - 1, k, dp);
}