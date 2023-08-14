// Link : https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

// Solution:

int kthSmallest(int arr[], int l, int r, int k)
{
    // code here

    priority_queue<int> pq;

    for (int i = l; i <= r; i++)
    {
        pq.push(arr[i]);
    }
    int a = r - l + 1 - k;
    // if(k==1) return pq.top();

    while (a != 0)
    {
        pq.pop();
        a--;
    }
    return pq.top();
}

// Time Complexity: O(n)
// Space Complexity: O(1)