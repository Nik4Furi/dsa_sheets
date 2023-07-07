// Link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

// Solution:

long long maxSubarraySum(int arr[], int n)
{

    // Your code here

    int i = 0;
    long long maxi = arr[0], sum = 0;
    while (i < n)
    {
        sum += arr[i];
        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
        i++;
    }

    return maxi;
}

// Time Complexity: O(n)
// Space Complexity: O(1)