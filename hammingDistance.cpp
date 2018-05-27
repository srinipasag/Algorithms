// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
// Given two integers x and y, calculate the Hamming distance.
// Note:
// 0 ≤ x, y < 231.
// Input: x = 1, y = 4
// Output: 2
// Explanation:
// 1   (0 0 0 1)
// 4   (0 1 0 0)
       ↑   ↑
class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp1, temp2, count = 0;
        for (int i=0; i<32; i++)
        {
            temp1 = x & (1<<i);
            temp2 = y & (1 << i);
            //cout << "temp1-" << temp1 << "temp2 " << temp2 <<endl;
            if (temp1 != temp2)count++;
            
        }
        return count;
        
    }
};
