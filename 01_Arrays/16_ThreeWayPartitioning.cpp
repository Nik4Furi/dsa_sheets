void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        
        int low=0,mid=0,high=array.size()-1;
        
        while(mid<=high){
            if(array[mid] <a)
                swap(array[mid++],array[low++]);
            else if(array[mid] >=a && array[mid] <=b)
                mid++;
            else swap(array[mid],array[high--]);
        }
    }
// Link: https://practice.geeksforgeeks.org/problems/three-way-partitioning/1