class Solution {
public:
    bool doble = false;
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(doble == true){
                return true;
                }
            
                if(nums[i] == nums[i-1]){
                    doble = true;
                }
        }
        if(doble == true) return true;
        doble = false;
        return false;
    }
};