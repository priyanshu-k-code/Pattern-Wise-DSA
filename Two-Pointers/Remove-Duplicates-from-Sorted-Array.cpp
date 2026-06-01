// LeetCode 26 - Remove Duplicates from Sorted Array
// Pattern: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[j] != nums[i]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};