class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 0;  
        for (int i = 0; i < nums.size(); i++) {
            bool isDuplicate = false;
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j]) {
                    isDuplicate = true;
                    break;  
                }
            }
            if (!isDuplicate) {
                nums[k] = nums[i];  
                k++;  
            }
        }
        return k; 
    }
};