// https://practice.geeksforgeeks.org/problems/edit-distance3702/1

// function to edit the distance minimum
int solve(string s, int i, int n, string t, int j, int m, vector<vector<int>> &dp)
{
    // base cease
    if (i == n)
        return m - j;
    if (j == m)
        return n - i;

    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = 0;
    if (s[i] == t[j])
    {
        return solve(s, i + 1, n, t, j + 1, m, dp);
    }

    else
    {
        // insert
        int insertE = 1 + solve(s, i, n, t, j + 1, m, dp);

        // delete
        int deleteE = 1 + solve(s, i + 1, n, t, j, m, dp);

        // replace
        int replacE = 1 + solve(s, i + 1, n, t, j + 1, m, dp);

        ans = min({insertE, deleteE, replacE});
    }

    return dp[i][j] = ans;
}
int editDistance(string s, string t)
{
    // Code here
    int n = s.length(), m = t.length();

    vector<vector<int>> dp(n, vector<int>(m, -1));

    return solve(s, 0, n, t, 0, m, dp);
}