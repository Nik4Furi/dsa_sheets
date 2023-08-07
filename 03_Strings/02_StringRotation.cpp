bool CheckRotaion(string str1, string str2)
{
    // base case
    if (str1.size() != str2.size())
        return false;

    int n = str1.size();

    for (int i = 0; i < n; i++)
    {

        if (str1[i] == str2[0])
        {
            // check suffix of str1 with prefix of str2
            if (str1.substr(i) == str2.substr(0, n - i))
            {
                // check prefix of str1 with suffix of str2
                if (str1.substr(0, i) == str2.substr(n - i))
                    return true;
            }
        }
    }

    return false;
}

// https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/