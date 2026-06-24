class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int i=0;
        int k=1;
        for (int j=1;j<len;j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                k++;
                i++;
            }
        }
        return k;
    }
};
