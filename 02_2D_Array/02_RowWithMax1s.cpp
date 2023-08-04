int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here

    int cnt = 0, row = 0, col = m - 1, ans = 0;

    while (col >= 0 && row <= n - 1)
    {
        if (arr[row][col] == 1)
            ans = row, col--;

        else
            row++;
    }

    if (col == m - 1)
        return -1;

    return ans;
}

// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1