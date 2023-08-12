int highestPow(int n)
{
    int x = 0;
    while (1 << x <= n)
        x++;

    return x - 1;
}

int solve(int n)
{
    if (n == 0)
        return 0;

    // Calculate Highest Power
    int x = highestPow(n);

    // Count Bits Till 2 ^ x - 1 if n = 11 Then for 7
    int bits = (1 << (x - 1)) * x;

    // Count the Rest left Most Bits
    int rest = n - (1 << x) + 1;

    return bits + rest + solve(rest - 1);
}

int countSetBits(int n)
{
    return solve(n);
}

// https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1