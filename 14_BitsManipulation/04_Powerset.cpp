// https://practice.geeksforgeeks.org/problems/power-set4302/1

// Function to find all the subsequences of string
void solve(string s, int n, int index, vector<string> &ans, string output)
{

    if (index >= n)
    {
        if (output != "")
            ans.push_back(output);
        return;
    }

    solve(s, n, index + 1, ans, output);

    // Consider
    output += s[index];

    solve(s, n, index + 1, ans, output);
}
vector<string> AllPossibleStrings(string s)
{
    // Code here

    vector<string> ans;
    string output = "";

    int index = 0;

    solve(s, s.size(), index, ans, output);

    sort(ans.begin(), ans.end());
    return ans;
}