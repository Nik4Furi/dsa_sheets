/*// Question
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6]. */

// Link https://leetcode.com/problems/merge-intervals/description/

// Brute Force ---------------------------------------------
vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    int n = intervals.size();

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        int start = intervals[i][0], end = intervals[i][1];

        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }

        // MOve to the intervals and create pair
        for (int j = i + 1; j < n; j++)
        {
            if (intervals[j][0] <= end)
                end = max(end, intervals[j][1]);
            else
                break;
        }

        ans.push_back({start, end});
    }

    return ans;
}

//Time Complexity: O(nlogn + 2n) SpaceComplexity: O(n)[for store the intervals]



// Optimal----------------------------------------------

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    int n = intervals.size();

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {

        // if ans empty || no in range
        if (ans.empty() || ans.back()[1] < intervals[i][0])
            ans.push_back(intervals[i]);

        // O/w need to compare and update the range
        else
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
    }

    return ans;
}
// Time Complexity: O(nlogn + n) SpaceComplexity: O(n)[for store the intervals]