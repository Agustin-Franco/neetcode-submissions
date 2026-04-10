class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int invariant = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[invariant++] = nums[i];
            }
        }
        return invariant;
    }
};