vector<int> findTwoElement(vector<int> arr, int n)
{
    // code here
    vector<int> ans;
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != arr[i] - 1)
        {
            ans.push_back(arr[i]);
            ans.push_back(i + 1);
        }
    }
    return ans;
}

// https: // practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1