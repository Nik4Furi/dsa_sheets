vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
{
    // code here

    vector<int> ans;

    for (int row = 0; row < N; row++)
    {

        for (int col = 0; col < N; col++)
            ans.push_back(Mat[row][col]);
    }

    // 2. Sort the array
    sort(ans.begin(), ans.end());

    // 3. now push ans array into matrix
    int i = 0;
    for (int row = 0; row < N; row++)
    {

        for (int col = 0; col < N; col++)
            Mat[row][col] = ans[i++];
    }

    return Mat;
}
// https: // practice.geeksforgeeks.org/problems/sorted-matrix2333/1