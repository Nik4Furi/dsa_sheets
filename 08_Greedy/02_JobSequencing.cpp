class Solution
{
public:
    // 1. Create a comparetor to arrange on max profit
    static bool compare(Job a, Job b) { return a.dead > b.dead; }

    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here

        // 1. Sort the array in respect of the max profits
        sort(arr, arr + n, compare);

        // Declaring vars
        int ans = 0, cnt = 0;
        priority_queue<int> pq;

        int k = arr[0].dead, i = 0;

        while (k > 0)
        {
            while (i < n && arr[i].dead >= k)
                pq.push(arr[i++].profit);

            if (pq.size())
            {
                cnt++;
                ans += pq.top();
                pq.pop();
            }
            k--;
        }

        return {cnt, ans};
    }
};

// https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1