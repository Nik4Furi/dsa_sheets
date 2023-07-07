// Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

// Solution:

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        
        for(int i=0;i<m;i++){
           mp[b[i]]++;
        }
        return mp.size();
    }

// Time Complexity: O(n)
// Space Complexity: O(1)