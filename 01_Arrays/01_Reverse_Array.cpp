// Link: https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

// Solution:

void reverseInGroups(vector<long long> &arr, int n, int k)
{
    // code here

    for (int i = 0; i < n; i += k)
    {

        int left = i;
        int right = min(k + i - 1, n - 1);

        while (left < right)
            swap(arr[left++], arr[right--]);
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)