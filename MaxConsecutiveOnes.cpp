class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int len = nums.size();
       int max_count = 0;
       int conse = 0;

       for(int i = 0; i < len; i++) {
            if(nums[i] == 1) {
                conse++;
                max_count = max(max_count, conse);
            }
            else {
                conse = 0;
            }
       }

       return max_count;
    }
};
