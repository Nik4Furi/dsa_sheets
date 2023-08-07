// https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1

vector<int> singleNumber(vector<int> nums)
{
    // Code here.

    int xorans = 0;

    for (auto x : nums)
        xorans ^= x;

    // 2. create mask of xorans
    xorans = xorans & ~(xorans - 1);

    // 3. set the bits
    int set1 = 0, set2 = 0;

    for (auto x : nums)
    {
        if (xorans & x)
            set1 ^= x;
        else
            set2 ^= x;
    }

    // check set1 and set2
    if (set1 < set2)
        return {set1, set2};

    return {set2, set1};
}