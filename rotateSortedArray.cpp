// Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
// (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
// You are given a target value to search. If found in the array return its index, otherwise return -1.
// You may assume no duplicate exists in the array.
// Your algorithm's runtime complexity must be in the order of O(log n).
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size() -1 ;
        return binarySearch (nums, 0, length, target);
    }
    int binarySearch (vector<int>& nums, int l, int h, int target)
    {
        if(l > h) return -1; 
        int mid = l + (h - l ) / 2; 
        
        if (nums[mid] == target) return mid;
        if (nums[l] <= nums[mid]) {
            if ((target >= nums[l]) && (target <= nums[mid]))
                return binarySearch (nums, l, mid -1 , target);
            else
                return binarySearch (nums, mid+1, h, target);
        }
        // nums[l]..nums[mid] is not sorted 5 6 7 0 1 2 3 
        if ((target >= nums[mid]) && (target <= nums[h])) 
           return binarySearch (nums, mid+1, h, target);
        else
           return binarySearch (nums, l, mid -1, target);
    } 
};
