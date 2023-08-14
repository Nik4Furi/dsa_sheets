/*// Question
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
 */

// Link https://leetcode.com/problems/next-permutation/

// Brute Force ---------------------------------------------

1. Generate all the permuations and sort
2. Linear search next permutation if found 
3. O/w return first permuation of the array

//Time Complexity: O(n!*n) SpaceComplexity: O(n!)



// Optimal----------------------------------------------
vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int n = A.size(),ind=-1;

    //Find the break point 
    for(int i=n-2;i>=0;i--){
        if(A[i] < A[i+1]){
            ind = i;
            break;
        }
    }

    //Edge case if ind not update
    if(ind == -1){
        reverse(A.begin(),A.end());
        return A;
    }

    //o/w we want to swap with smallest greater ele
    for(int i=n-1;i>=0;i--){
        if(A[i] > A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }

    //now have to sort the next entities
    reverse(A.begin()+ind+1,A.end());

    return A;
}

// Time Complexity: O(n+n+N) SpaceComplexity: O(n)[for return ] O/w O(1)