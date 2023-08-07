// https://practice.geeksforgeeks.org/problems/max-rectangle/1

int histo(int *arr, int m)
{
    int ans = 0;
    stack<int> index;
    stack<int> height;

    int i;
    for (i = 0; i < m; i++)
    {
        int l = i;
        while (!height.empty() && height.top() > arr[i])
        {
            int temp = height.top() * (i - index.top());
            l = index.top();
            index.pop();
            height.pop();
            ans = max(ans, temp);
        }
        if (arr[i] != 0)
        {
            index.push(l);
            height.push(arr[i]);
        }
    }

    while (!height.empty())
    {
        int temp = height.top() * (i - index.top());
        index.pop();
        height.pop();
        ans = max(ans, temp);
    }

    return ans;
}

int maxArea(int M[MAX][MAX], int n, int m)
{
    // Your code here

    int ans = histo(M[0], m);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] != 0)
            {
                M[i][j] = M[i][j] + M[i - 1][j];
            }
        }
        ans = max(ans, histo(M[i], m));
    }
    return ans;
}