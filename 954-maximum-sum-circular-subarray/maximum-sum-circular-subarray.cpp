class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = 0,csum1=0,csum2=0,max_sum = INT_MIN,min_sum = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            total_sum += nums[i];
            csum1+=nums[i];
            max_sum = max(csum1,max_sum);
            if(csum1<0){
                csum1=0;
            }
            csum2 += nums[i];
            min_sum = min(csum2,min_sum);
            if(csum2>0){
                csum2 = 0;
            }
        }
        if(total_sum == min_sum)
        {
            return max_sum;
        }
        return max(max_sum,total_sum-min_sum);
    }
};