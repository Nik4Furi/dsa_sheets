int setBits(int N)
{
    // Write Your Code here
    int cnt = 0;
    while (N)
    {
        if (N & 1)
            cnt++;
        N >>= 1;
    }
    return cnt;
}

// https://practice.geeksforgeeks.org/problems/set-bits0143/1