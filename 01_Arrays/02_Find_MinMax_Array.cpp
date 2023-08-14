// Link: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

// Solution:

pair<long long, long long> getMinMax(long long a[], int n) {
    long long mini = a[0],maxi = a[0];
    
    for(int i=0;i<n;i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    }
    return {mini,maxi};
}

//Time Complexity: O(n)
//Space Complexity: O(1)