class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int peakpt=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                peakpt=i;
                break;
            }
        }
        if(peakpt==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>peakpt;i--){
            if(nums[i]>nums[peakpt]){
                swap(nums[i],nums[peakpt]);
                break;
            }
        }
        reverse(nums.begin()+peakpt+1,nums.end());

    }
};
