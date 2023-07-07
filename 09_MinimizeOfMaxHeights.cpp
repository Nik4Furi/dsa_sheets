// Link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

// Solution:

int getMinDiff(int arr[], int n, int k)
{
    // code here

    // Sort the array
    sort(arr, arr + n);

    // Base caes
    int diff = arr[n - 1] - arr[0];
    if (diff <= 0)
        return diff;

    int mini = arr[0] + k, maxi = arr[n - 1] - k, mi, mx;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] - k < 0)
            continue;
        else
        {
            mi = min(mini, arr[i] - k);
            mx = max(maxi, arr[i - 1] + k);
            diff = min(diff, mx - mi);
        }
    }
    return diff;
}

// Time Complexity: O(nlogn)
// Space Complexity: O(1)