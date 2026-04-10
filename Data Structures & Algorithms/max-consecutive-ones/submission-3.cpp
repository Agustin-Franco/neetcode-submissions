class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int best = 0;
        for (int a : nums) {
            if (a == 1) {
                ++current;
            } else {
                best = max(best, current);
                current = 0;
            }
        }
        // check after loop in case array ends with 1s
        best = max(best, current);
        return best;
    }
};