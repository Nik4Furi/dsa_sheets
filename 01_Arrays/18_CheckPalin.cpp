// Function to check palindrome
bool isPalin(string ans)
{
    int i = 0, j = ans.size() - 1;

    while (i <= j)
    {
        if (ans[i] != ans[j])
            return false;
        i++, j--;
    }
    return true;
}
int PalinArray(int a[], int n)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        int ele = a[i];

        string ans = to_string(ele);

        if (!isPalin(ans))
            return 0;
    }

    return 1;
}

// https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1