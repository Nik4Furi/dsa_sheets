// https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1

int maxSubStr(string str)
{
    // Write your code here

    // 1. find 0's and 1's count
    int cnt0 = 0, cnt1 = 0, n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            cnt0++;
        else
            cnt1++;
    }

    // edge case
    if (cnt0 != cnt1)
        return -1;

    // Can divide
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            cnt0--;
        else
            cnt1--;

        if (cnt0 == cnt1)
            ans++;
    }

    return ans;
}