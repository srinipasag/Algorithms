//Given an array of integers, find if the array contains any duplicates.
//Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
//Example 1:

//Input: [1,2,3,1]
//Output: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        set<int> hash;
        for (int i = 0; i < size; i++) {
            
            if (hash.find(nums[i]) != hash.end()) {
                cout << nums[i];
                return true;
            }
            hash.insert(nums[i]);
            
        }
        return false;
        
    }
};
