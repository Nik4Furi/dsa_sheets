// https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1

double MedianOfArrays(vector<int> &array1, vector<int> &array2)
{
    int n = array1.size();
    int m = array2.size();
    vector<int> ans;

    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (array1[i] < array2[j])
        {
            ans.push_back(array1[i]);
            i++;
        }
        else
        {
            ans.push_back(array2[j]);
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(array1[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(array2[j]);
        j++;
    }

    int mid = ans.size() / 2;
    if (ans.size() % 2 == 0)
    {
        return (ans[mid - 1] + ans[mid]) / 2.0;
    }
    else
    {
        return ans[mid];
    }
}