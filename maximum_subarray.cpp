// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // 1st approach
        // int maxsum = INT_MIN;
        // int sum = 0;
        // for(int i=0; i<nums.size(); i++){
        //     sum += nums[i];

        //     if(sum > maxsum){
        //         maxsum = sum;
        //     }

        //     if(sum < 0){
        //         sum = 0;
        //     }
        // }
        // return maxsum;


        //2nd approach
        int ans = INT_MIN;
        int sum = 0;

        for(const int num : nums){
            sum = max(num, sum + num);
            ans = max(ans, sum);
        }
        return ans;
    }
};