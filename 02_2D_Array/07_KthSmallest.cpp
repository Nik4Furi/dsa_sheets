// https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    // Your code here
    // base case
    //   if(k == 0) return mat[n-1][n-1];

    //   if(k == n) return mat[0][0];

    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pq.push(mat[i][j]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
    }
    return pq.top();
}