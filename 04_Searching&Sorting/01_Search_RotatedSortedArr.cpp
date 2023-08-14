    //Find pivot element of the sorted rotated array
    int pivot(vector<int>& nums,int n){
        int start=0,end=n-1;

        while(start <end){
            int mid = start+(end-start)/2;

            if(nums[mid] >= nums[0])
                start = mid+1;
            else end =mid;
        }
        return start;
    }

    //------- code of binary search a target ele
    int bs(vector<int>& nums,int start,int end,int target){

        while(start <= end){
            int mid = start+(end-start)/2;

            if(nums[mid]== target)
                return mid;
            else if(nums[mid] < target){
                start = mid+1;
            }
            else end =mid-1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        //base case
        if(n == 1) return nums[0] == target ? 0:-1;

        //1. Find the pivot ind means minimum ele
        int pivotInd = pivot(nums,n);

        //2. Check target ele
        if(target >= nums[pivotInd] && target <= nums[n-1]){
            //2nd line
            return bs(nums,pivotInd,n-1,target);
        }
        else //1st line mai bs
            return bs(nums,0,pivotInd-1,target);
    }

// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/