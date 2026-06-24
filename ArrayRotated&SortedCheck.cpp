class Solution {
public:
    bool check(vector<int>& nums) {
       int len=nums.size();
       int peak=0;
       for (int i=1;i<len;i++){
        if(nums[i]<nums[i-1]){
            peak=peak+1;
        }
       }
       if(nums[len-1]>nums[0]){
        peak=peak+1;
       }
       if(peak>1){
        return false;
        }
       return true;
    }
};
