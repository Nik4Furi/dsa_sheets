// Function to find the maximum number of meetings that can
// be performed in a meeting room.
int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    // base
    if (n <= 0)
        return 0;
    vector<pair<int, int>> vp;
    int res = 1;
    int prev = 0;
    for (int i = 0; i < n; ++i)
        vp.push_back({end[i], start[i]});
    sort(vp.begin(), vp.end());
    for (int i = 1; i < n; ++i)
    {
        if (vp[i].second > vp[prev].first)
        {
            ++res;
            prev = i;
        }
    }
    return res;
}
// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1