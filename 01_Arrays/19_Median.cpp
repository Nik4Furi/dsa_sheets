// https://practice.geeksforgeeks.org/problems/find-the-median0527/1

int find_median(vector<int> v)
{
    // Code here.
    int n = v.size();

    sort(v.begin(), v.end());

    if (n & 1)
        return v[n / 2];
    return (v[n / 2] + v[n / 2 - 1]) / 2;
}