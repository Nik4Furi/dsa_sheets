
double findTotalDistance(tuple<int, int, int> &l, vector<pair<int, int>> &p, int n, double x)
{
    double a = get<0>(l);
    double b = get<1>(l);
    double c = get<2>(l);
    double y = -1 * ((a * x) + c) / b;
    double dist = 0;
    for (auto it : p)
    {
        double x1 = it.first;
        double y1 = it.second;
        dist += sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    }
    return dist;
}
double findOptimumCost(tuple<int, int, int> l, vector<pair<int, int>> p, int n)
{
    // Write your code here

    double low = -1e6, high = 1e6, eps = 1e-6;

    while (high - low > eps)
    {
        double mid1 = low + (high - low) / 3, mid2 = high - (high - low) / 3;

        double d1 = findTotalDistance(l, p, n, mid1);
        double d2 = findTotalDistance(l, p, n, mid2);

        if (d1 > d2)
            low = mid1;
        else if (d1 < d2)
            high = mid2;
        else
            low = mid1, high = mid2;
    }

    return findTotalDistance(l, p, n, low);
}

// https://practice.geeksforgeeks.org/problems/optimum-location-of-point-to-minimize-total-distance/1