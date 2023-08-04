// Link: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

// Solution:

void segregateElements(int arr[], int n)
{
    // Your code goes here
    vector<int> v1, v2, v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            v1.push_back(arr[i]);
        else
            v2.push_back(arr[i]);
    }

    for (int i = 0; i < v1.size(); i++)
        v.push_back(v1[i]);
    for (int i = 0; i < v2.size(); i++)
        v.push_back(v2[i]);

    for (int i = 0; i < v.size(); i++)
        arr[i] = v[i];
}

// Time Complexity: O(n)
// Space Complexity: O(1)