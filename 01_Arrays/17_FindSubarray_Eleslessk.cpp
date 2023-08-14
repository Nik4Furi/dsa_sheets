int minSwap(int arr[], int n, int k)
{
    // Complet the function

    int cnt = 0;

    // 1. Count no of eles in array is <=k
    for (int i = 0; i < n; i++)
        if (arr[i] <= k)
            cnt++;

    int swaps = 0;

    // 2. Count swaps which is > k
    for (int i = 0; i < cnt; i++)
        if (arr[i] > k)
            swaps++;

    // 3. Now we got the size of the subarray now , implement swapping
    int i = 0, j = cnt, mini = swaps;

    while (j < n)
    {
        if (arr[i] > k)
            swaps--;

        if (arr[j] > k)
            swaps++;

        mini = min(mini, swaps);
        i++, j++;
    }
    return mini;
}

// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1