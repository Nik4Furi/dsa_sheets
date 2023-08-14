// Function to check if given number n is a power of two.
bool isPowerofTwo(long long n)
{

    // Your code here

    if (n == 0)
        return false;
    if (n == 1)
        return true;

    while (n != 1)
    {

        // if even
        if (n & 1)
            return false;

        n >>= 1;
    }

    return true;
}

// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
