// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

int majorityElement(int a[], int size)
{

    // your code here

    if (size == 0 || size == 1)
        return a[0];

    if (size == 2)
    {
        return a[0] == a[1] ? a[0] : -1;
    }

    int ans = INT_MIN, cnt = 0;

    for (int i = 0; i < size; i++)
    {
        if (ans == a[i])
            cnt++;

        else if (cnt == 0)
            ans = a[i];
        else
            cnt--;
    }

    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (ans == a[i])
            temp++;
    }

    if (temp > size / 2)
        return ans;

    return -1;
}