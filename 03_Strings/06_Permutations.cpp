// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

// Function to find permutations
void solve(string S, int n, int index, unordered_set<string> &st)
{
    // base case
    if (index >= n)
    {
        st.insert(S);
        return;
    }

    for (int j = index; j < n; j++)
    {

        swap(S[index], S[j]);

        solve(S, n, index + 1, st);

        // backtrack
        swap(S[index], S[j]);
    }
}
vector<string> find_permutation(string S)
{
    // Code here there

    int n = S.size();

    unordered_set<string> st;
    int index = 0;

    solve(S, n, index, st);

    vector<string> ans(st.begin(), st.end());

    return ans;
}