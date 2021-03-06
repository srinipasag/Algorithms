
//Given two arrays, write a function to compute their intersection.

//Example:
//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

//Note:
//Each element in the result must be unique.
//The result can be in any order.
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> hashset;
        set<int>resultSet;
        
        for (int i=0; i< nums1.size(); i++)
            hashset.insert (nums1[i]);
        for (int i =0; i< nums2.size(); i++)
            if (hashset.find (nums2[i] )!= hashset.end())
                resultSet.insert (nums2[i]);
        
        vector<int> resultVector;
        
        for(set<int>::iterator iter = resultSet.begin(); iter != resultSet.end(); iter ++ ) {
            cout << *iter << endl;
            resultVector.push_back(*iter);
        }
        return resultVector;
    }
};
