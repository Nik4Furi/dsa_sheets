// Function to rotate matrix anticlockwise by 90 degrees.
void rotateby90(vector<vector<int>> &matrix, int n)
{
    // code here

    // 1. Swap the matrix in cols
    for (int row = 0; row < n; row++)
    {
        int col = 0, cols = n - 1;
        while (col <= cols)
            swap(matrix[row][col++], matrix[row][cols--]);
    }

    // 2. Swap in digonal

    for (int i = 0; i < n; i++)
    {

        for (int row = n - 1; row >= i; row--)
            swap(matrix[i][row], matrix[row][i]);
    }
}

// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
