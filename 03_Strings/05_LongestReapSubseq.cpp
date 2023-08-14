int LongestRepeatingSubsequence(string str)
{
    // Code here

    int y = str.size();
    string temp = str;
    vector<int> prev(y + 1, 0);
    vector<int> cur(y + 1, 0);
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            int p1 = 0, p2 = 0;
            if (str[i - 1] == temp[j - 1] && i != j)
            {
                cur[j] = 1 + prev[j - 1];
            }
            else
            {
                cur[j] = max(prev[j], cur[j - 1]);
            }
        }
        prev = cur;
    }

    return prev[y];
}

// https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1