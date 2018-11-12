
// leetCode - twoSum
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        unordered_map<int, int> hash(length); 
        for (int i = 0; i < length; i++)
        {
            if (hash.find(target - nums[i]) != hash.end()) {
                //cout << hash[target - nums[i]] << i << nums[i] << endl;
                return {hash[target - nums[i]], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};


/*
3Sum:
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
    // Fix the first element as A[i] 
    for (int i = 0; i < arr_size - 2; i++) { 
  
        // Find pair in subarray A[i+1..n-1] 
        // with sum equal to sum - A[i] 
        unordered_set<int> s; 
        int curr_sum = sum - A[i]; 
        for (int j = i + 1; j < arr_size; j++) { 
            if (s.find(curr_sum - A[j]) != s.end()){ 
            printf("Triplet is %d, %d, %d", A[i],  
                    A[j], curr_sum-A[j]); 
                return true; 
            } 
            s.insert(A[j]); 
        } 
    } 
  
    // If we reach here, then no triplet was found 
    return false; 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int A[] = { 1, 4, 45, 6, 10, 8 }; 
    int sum = 22; 
    int arr_size = sizeof(A) / sizeof(A[0]); 
  
     find3Numbers(A, arr_size, sum); 
      
    return 0; 
} 



*/
