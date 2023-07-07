// Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

// Solution:

void sort012(int a[], int n)
{
    // code here
    int s = 0, m = 0, e = n - 1;

    while (m <= e)
    {
        if (a[m] == 0)
        {
            swap(a[s], a[m]);
            s++, m++;
        }
        else if (a[m] == 1)
            m++;
        else
        {
            swap(a[m], a[e--]);
        }
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)