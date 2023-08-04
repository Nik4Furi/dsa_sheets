// Link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

// Solution:

void rotate(int arr[], int n)
{
    int i=0,j=n-1;
    while(i!=j) swap(arr[i++],arr[j]);
}

// Time Complexity: O(n)
// Space Complexity: O(1)