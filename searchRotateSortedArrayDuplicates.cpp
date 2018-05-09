//suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
//(i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).
//You are given a target value to search. If found in the array return true, otherwise return false.

//Example 1:

//Input: nums = [2,5,6,0,0,1,2], target = 0
//Output: true

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 0)
            return false;
        
        return binarySearch (nums, 0, length -1, target);
         
    }
    bool binarySearch (vector<int>& nums, int left, int right, int target)
    {
        if (left > right)
            return false; 
        int mid = (left + right)/2;
        if (nums[mid] == target) 
            return true;
        
        if (nums[left] < nums[mid] )
        {
            if ((target <= nums[mid]) && (target >= nums[left])) 
                return binarySearch(nums, left, mid -1, target);
            //cout << "mid+1" << mid+1 << " right" << right << endl;
            return binarySearch(nums, mid+1, right, target);
        }   
        else if (nums[left] > nums[mid])
        {
            if ((target >= nums[mid]) && (target <= nums[right]))
                    return binarySearch(nums, mid+1, right, target); 
            return binarySearch(nums, left, mid -1, target);
        }
        else 
              return binarySearch(nums, left+1, right, target);

    

      return false;
    }
};
