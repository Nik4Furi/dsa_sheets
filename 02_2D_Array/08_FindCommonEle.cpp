// https://www.geeksforgeeks.org/common-elements-in-all-rows-of-a-given-matrix/

Given an m x n matrix, find all common elements present in all rows in O(mn)
time and one traversal of matrix.

    Example :

    Input : mat[4][5] = {
    {1, 2, 1, 4, 8},
    {3, 7, 8, 5, 1},
    {8, 7, 7, 3, 1},
    {8, 1, 2, 7, 9},
};

vector<int> findCommon(int mat[m][n])
{

    vector<int> ans;

    unordered_map<int, int> mp;

    // initialize 1st row elements with value 1
    for (int j = 0; j < N; j++)
        mp[(mat[0][j])] = 1;

    // traverse the matrix
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // If element is present in the map and
            // is not duplicated in current row.
            if (mp[(mat[i][j])] == i)
            {
                // we increment count of the element
                // in map by 1
                mp[(mat[i][j])] = i + 1;

                // If this is last row
                if (i == M - 1 && mp[(mat[i][j])] == M)
                    ans.push_back(mat[i][j]);
            }
        }
    }

    return ans;

}
//tC - O(mn), sC-O(n)
